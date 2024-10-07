#include<iostream>

using namespace std;

// Class to represent a person with first and last name
class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // Setter for first name
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    // Getter for first name
    string getFirstName()
    {
        return _FirstName;
    }

    // Setter for last name
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    // Getter for last name
    string getLastName()
    {
        return _LastName;
    }

    // Method to return the full name
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
};


int main ()
{
	clsPerson Perason1;

	Perason1.setFirstName("A7med");
	Perason1.setLastName ("Labib");

	cout << "First Name: " << Perason1.getFirstName() << endl;
	cout << "Last Name: " << Perason1.getLastName() << endl;
	cout << "Full Name: " << Perason1.FullName() << endl;

}