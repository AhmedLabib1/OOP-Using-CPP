#include<iostream>
using namespace std;

class clsPerson {
private:
    string _FirstName; // Private member variable

public:
    // Setter for _FirstName
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Getter for _FirstName
    string getFirstName() {
        return _FirstName;
    }

    // Property declaration: maps getter and setter to a public property
    __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
};

int main() {
    clsPerson Person1;

    // Traditional setter and getter usage
    Person1.setFirstName("A7med");
    cout << Person1.getFirstName() << endl;

    // Using the property like a direct public member
    Person1.FirstName = "A7med"; // Calls setFirstName()
    cout << Person1.FirstName << endl; // Calls getFirstName()
}
