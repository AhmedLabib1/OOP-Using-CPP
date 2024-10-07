#include <iostream>

using namespace std;

                    //-------------------------------------------//
                    //                                           //
                    //          Multi Level Inheritance          // 
                    //                                           //
                    //-------------------------------------------//

class clsPerson
{
    int _ID = 0;
    string _firstName = "";
    string _lastName = "";
    string _fullName = _firstName + " " + _lastName;
    string _Email = "";
    string _Phone = "";

public:

    clsPerson(int ID, string firstName, string lastName, string Email, string Phone)
    {
        _ID = ID;
        _firstName = firstName;
        _lastName = lastName;
        _Email = Email;
        _Phone = Phone;

        cout << "Person    : Parameterized Constructor" << endl;
    }

    int getID()
    {
        return _ID;
    }

    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    string getFirstName()
    {
        return _firstName;
    }

    __declspec(property(get = getFirstName, put = setFirstName)) string firstName;

    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    string getLastName()
    {
        return _lastName;
    }

    __declspec(property(get = getLastName, put = setLastName)) string lastName;

    void getFullName()
    {
        cout << _firstName + " " + _lastName << endl;
    }

    void setEmail(string Email)
    {
        _Email = Email;
    }

    string getEmail()
    {
        return _Email;
    }

    __declspec(property(get = getEmail, put = setEmail)) string Email;

    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    string getPhone()
    {
        return _Phone;
    }

    __declspec(property(get = getPhone, put = setPhone)) string Phone;

    void Print()
    {
        cout << "Info: " << endl << endl;
        cout << "________________________________________" << endl;
        cout << "ID: " << _ID << endl;
        cout << "First Name: " << _firstName << endl;
        cout << "Last Name: " << _lastName << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "________________________________________" << endl;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << endl;
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
        cout << endl;
    }

    void SendSMS(string SMS)
    {
        cout << "The following SMS sent successfully to Phone: " << _Phone << endl;
        cout << "SMS: " << SMS << endl;
    }

};

class clsEmployee : public clsPerson
{
    string _Title;
    string _Department;
    float  _Salary;

public:
    clsEmployee(int ID, string firstName, string lastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson (ID, firstName, lastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;

        cout << "Employee  : Parameterized Constructor" << endl;
    }

    void setTitle(string Title)
    {
        _Title = Title;
    }

    string getTitle()
    {
        return _Title;
    }

    __declspec(property(get = getTitle, put = setTitle)) string Title;

    void setDepartment(string Department)
    {
        _Department = Department;
    }

    string getDepartment()
    {
        return _Department;
    }

    __declspec(property(get = getDepartment, put = setDepartment)) string Department;

    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    float getSalary()
    {
        return _Salary;
    }

    __declspec(property(get = getSalary, put = setSalary)) float Salary;

    void Print ()
    {
        cout << "Info: " << endl << endl;
        cout << "________________________________________" << endl;
        cout << "ID         : " << getID() << endl;
        cout << "First Name : " << firstName << endl;
        cout << "Last Name  : " << lastName << endl;
        cout << "Email      : " << Email << endl;
        cout << "Phone      : " << Phone << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Department : " << _Department << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "________________________________________" << endl;
    }
};

class clsDeveloper : public clsEmployee
{   
    string _mainProgrammingLanguage;
    
public:
    clsDeveloper(int ID, string firstName, string lastName, string Email, string Phone, string Title, string Department, int Salary, string mainProgrammingLanguage) 
        : clsEmployee (ID, firstName, lastName, Email, Phone, Title, Department, Salary)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
        cout << "Programmer: Parameterized Constructor" << endl;
    }

    void setMainProgrammingLanguage (string mainProgrammingLanguage)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    string getMainProgrammingLanguage ()
    {
        return _mainProgrammingLanguage;
    }

    __declspec(property(get = getMainProgrammingLanguage, put = setMainProgrammingLanguage)) string mainProgrammingLanguage;

    void Print()
    {
        cout << "\nInfo: " << endl << endl;
        cout << "________________________________________" << endl;
        cout << "ID         : " << getID() << endl;
        cout << "First Name : " << firstName << endl;
        cout << "Last Name  : " << lastName << endl;
        cout << "Email      : " << Email << endl;
        cout << "Phone      : " << Phone << endl;
        cout << "Title      : " << Title << endl;
        cout << "Department : " << Department << endl;
        cout << "Salary     : " << Salary << endl;
        cout << "MPL        : " << _mainProgrammingLanguage << endl;
        cout << "________________________________________" << endl;
    }
};  

int main()
{
    clsEmployee Employee1(10, "A7med", "Labib", "ahmed.lapip51@gmail.com", "01272655708", "Software Engineer", "Computer Science", 5000);
    Employee1.Print();

    clsDeveloper Developer1(20, "3mr", "Khalid", "amrahmedyoussef79@gmail.com", "01267893210", "Software Engineer", "AI", 5000, "C++");
    Developer1.Print();
}
