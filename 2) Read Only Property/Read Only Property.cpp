#include<iostream>

using namespace std;

// Class representing a Person with ID, First Name, and Last Name
class clsPerson
{
private:
    // Private members: only accessible within the class
    int _ID = 10;  // Default ID is set to 10
    string _FirstName;  // First name of the person
    string _LastName;   // Last name of the person

public:
    // Getter for ID
    // This is a "read-only" property because no setter method is provided
    int getID()
    {
        return _ID;  // Returns the ID (which is read-only)
    }

    // Setter for First Name
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;  // Assigns the input to the private member _FirstName
    }

    // Getter for First Name
    string getFirstName()
    {
        return _FirstName;  // Returns the value of the private member _FirstName
    }

    // Setter for Last Name
    void setLastName(string LastName)
    {
        _LastName = LastName;  // Assigns the input to the private member _LastName
    }

    // Getter for Last Name
    string getLastName()
    {
        return _LastName;  // Returns the value of the private member _LastName
    }

    // Method to return the full name of the person (First Name + Last Name)
    string FullName() const
    {
        return _FirstName + " " + _LastName;  // Combines the first and last name with a space
    }

};

int main()
{
    // Creating an object of clsPerson
    clsPerson Perason1;

    // Setting First and Last Names using setters
    Perason1.setFirstName("A7med");
    Perason1.setLastName("Labib");

    // Displaying values using getters and methods
    cout << "ID: " << Perason1.getID() << endl;  // Read-only, can only access via getID
    cout << "First Name: " << Perason1.getFirstName() << endl;
    cout << "Last Name: " << Perason1.getLastName() << endl;
    cout << "Full Name: " << Perason1.FullName() << endl;

    return 0;
}