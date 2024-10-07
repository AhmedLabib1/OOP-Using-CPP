#include <iostream>
#include <cstring> // For handling C-style strings

using namespace std;

class clsStudent {
private:
    char _name[20];  // Name of the student, stored as a C-style string
    int _ID;         // ID of the student

public:
    // Empty constructor: Initializes with default values
    clsStudent() {
        cout << "This is the empty constructor" << endl;
        strcpy_s(_name, "No name");
        _ID = 0;
    }

    // Parameterized constructor: Initializes with provided values
    clsStudent(char name[], int ID) {
        cout << "This is the parameterized constructor" << endl;
        strcpy_s(_name, name); // Copies the provided name to _name
        _ID = ID;
    }

    // Setter for name
    void setName(char name[]) {
        strcpy_s(_name, name); // Copies the provided name to _name
    }

    // Getter for name
    char* getName() {
        return _name;
    }

    // Getter for ID
    int getID() {
        return _ID;
    }

    // Print method to display the student's information
    void Print() {
        cout << "Name: " << _name << endl;
        cout << "ID: " << _ID << endl;
    }
};

int main() {
    // Creating two student objects: one with the default constructor and one with the parameterized constructor
    clsStudent Student1, Student2("A7med", 15248569);

    cout << "---------------------------" << endl;

    // Displaying Student1's default info
    cout << "Student1 Info\n" << endl;
    Student1.Print();

    cout << "---------------------------" << endl;

    // Displaying Student2's info, which was initialized using the parameterized constructor
    cout << "Student2 Info\n" << endl;
    Student2.Print();
}
