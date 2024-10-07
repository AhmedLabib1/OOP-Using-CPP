#include <iostream>

using namespace std;

int main()
{
    int* p;  // Declaration of a pointer to an integer

    p = new int;   // Dynamically allocate memory for one integer
    *p = 10;       // Assign the value 10 to the allocated memory

    cout << "Pointer p holds the address: " << p << endl;        // Prints the address where the value 10 is stored
    cout << "Address of pointer p itself: " << &p << endl;       // Prints the address of the pointer itself
    cout << "Value at the address held by p: " << *p << endl;    // Dereferences the pointer to get the value stored (10)

    // Deallocate the memory that was allocated to p
    delete p;

    cout << "**********************" << endl;
    // After delete, the pointer p still holds the address of the memory block, but it's considered "invalid" (dangling pointer).
    cout << "Pointer p after delete (still holds the address): " << p << endl;
    cout << "Address of pointer p itself: " << &p << endl;

    // Dereferencing a pointer after delete leads to undefined behavior
    cout << *p << endl;   // Accessing *p here would lead to undefined behavior, so it's commented out

    // Allocate new memory for p and assign a new value
    p = new int;
    *p = 20;

    cout << "**********************" << endl;
    cout << "Pointer p now holds the address: " << p << endl;       // Prints the new address allocated
    cout << "Address of pointer p itself: " << &p << endl;          // Prints the address of the pointer
    cout << "Value at the new address held by p: " << *p << endl;   // Prints the value stored (20)

    delete p;  // Always remember to delete dynamically allocated memory
}
