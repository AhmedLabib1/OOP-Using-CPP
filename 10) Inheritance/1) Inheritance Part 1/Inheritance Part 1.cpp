#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class clsStudent
{
private:
    char _Name[20]; // Array to hold the name of the student
    int  _ID;      // Variable to hold the student's ID

public:
    // Default constructor
    clsStudent()
    {
        cout << "empty constructor" << endl; // Indicates that the empty constructor is called
        strcpy(_Name, "No name");            // Initializes _Name to "No name"
        _ID = 0;                             // Initializes _ID to 0
    }

    // Parameterized constructor
    clsStudent(const char Name[], int ID)
    {
        cout << "parameterize constructor" << endl; // Indicates that the parameterized constructor is called
        strcpy(_Name, Name); // Copies the provided name into _Name
        _ID = ID;            // Sets _ID to the provided ID
    }

    // Member function to print the student's details
    void print()
    {
        cout << _Name << endl; // Prints the student's name
        cout << _ID << endl;   // Prints the student's ID
    }
};

int main()
{
    // Creating an object of clsStudent using the parameterized constructor
    clsStudent S1("Ali", 456), *ptr;

    // Array of objects ... Array of user-defined clsStudent
    // Initializes the array with three clsStudent objects, including S1
    clsStudent arr[4] = {clsStudent("A7med", 123), S1, clsStudent("3mr", 789)};

    // Pointer to the array of clsStudent
    ptr = arr;

    cout << "____________________________" << endl;

    // Loop to print the details of each student using pointer arithmetic
    for (int i = 0; i < 4; i++)
    {
        (ptr + i)->print(); // Calls the print function for each student object in the array
    }

    cout << "____________________________" << endl;

    // Loop to print the details of each student using pointer increment
    for (int i = 0; i < 4; i++)
    {
        (ptr++)->print(); // Calls the print function for each student object in the array and increments the pointer
    }
}