#include <iostream>
#include <cstring>

using namespace std;

class clsStudent 
{
private:
    static int Count; // Static variable to keep track of the number of student objects created
    char _Name[20];   // Array to hold the name of the student
    int _ID;          // Variable to hold the student's ID
    int _First, _Second, _Final, _Total; // Variables to hold scores

public:
    // Static function to print the current count of students
    static void Print_Count()
    {
        cout << "Number of students is: " << Count << endl;
    }

    // Default constructor
    clsStudent()
    {
        // Initialize all scores and ID to 0
        _First = _Second = _Final = 0; 
        _ID = 0;

        Count++; // Increment the static student count
        Print_Count(); // Print the current student count
    }

    // Parameterized constructor to set student details
    clsStudent(const char* name, int id, int first, int second, int final) {
        // Copy name into the _Name array
        strncpy(_Name, name, sizeof(_Name) - 1);
        _Name[sizeof(_Name) - 1] = '\0'; // Ensure null termination
        _ID = id; // Set student ID
        _First = first; // Set first score
        _Second = second; // Set second score
        _Final = final; // Set final score
        Count++; // Increment student count
        Print_Count(); // Print the current student count
    }

    // Function to display the student's details
    void Display() const {
        cout << "Student Name: " << _Name << ", ID: " << _ID 
             << ", Scores: [" << _First << ", " << _Second 
             << ", " << _Final << "]" << endl;
    }
};

// Initialize static member variable
int clsStudent::Count = 0;

int main() {
    // Print initial student count
    clsStudent::Print_Count();

    // Construct 2 student objects using the default constructor
    cout << "\nConstructing 2 students using default constructor:" << endl;
    clsStudent Student1; // Default student with ID and scores initialized to 0
    clsStudent Student2; // Another default student

    // Construct 2 student objects using the parameterized constructor
    cout << "\nConstructing 2 students using parameterized constructor:" << endl;
    clsStudent Student3("A7med", 1, 85, 90, 88); // Using parameterized constructor
    clsStudent Student4("Amr", 2, 78, 82, 75); // Another student

    // Display details of the students
    cout << "\nDisplaying student details:" << endl;
    Student1.Display(); // Default student (No name)
    Student2.Display(); // Default student (No name)
    Student3.Display(); // Alice's details
    Student4.Display(); // Bob's details

    // Construct an array of students using the default constructor
    cout << "\nConstructing an array of 3 students using default constructor:" << endl;
    clsStudent arr[3]; // This will call the default constructor for each element
}
