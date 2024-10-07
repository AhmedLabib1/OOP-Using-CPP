#include <iostream>

using namespace std;

int main()
{
    
    int arr[5] = { 10, 20, 30, 40, 50 }; // Declaration and initialization of an array of integers
    
    int* ptr = arr; // Pointer initialized to point to the first element of the array

    // Printing the memory address of the array and its first element
    cout << "Address of Firts Element: " << arr     << endl;  // Address of the first element (same as &arr[0])
    cout << "Address of Firts Element: " << arr + 0 << endl;  // Same as arr
    cout << "Address of Firts Element: " << &arr    << endl;  // Address of the array itself
    cout << "Address of Firts Element: " << &arr[0] << endl;  // Address of the first element
    cout << "Pointer of Firts Element: " << ptr     << endl;  // Address stored in the pointer

    cout << "_______________________________" << endl;

    // Printing the address of the pointer itself
    cout << "Address of pointer (ptr): " << &ptr << endl; // Address of the pointer variable

    cout << "_______________________________" << endl;

    // Printing values at the first element of the array using different methods
    cout << "Value at the first element: " << *arr       << endl; // Dereferencing the pointer to get the value (10)
    cout << "Value at the first element: " << *ptr       << endl; // Dereferencing ptr
    cout << "Value at the first element: " << arr[0]     << endl; // Accessing the first element using subscript
    cout << "Value at the first element: " << *(arr + 0) << endl; // Dereferencing using pointer arithmetic

    cout << "_______________________________" << endl;

    // Printing addresses of each element in the array
    cout << "Addresses of elements in the array:" << endl;
    cout << "Address of arr[0]: " << arr + 0 << endl; // Address of the first element
    cout << "Address of arr[1]: " << arr + 1 << endl; // Address of the second element
    cout << "Address of arr[2]: " << arr + 2 << endl; // Address of the third element
    cout << "Address of arr[3]: " << arr + 3 << endl; // Address of the fourth element
    cout << "Address of arr[4]: " << arr + 4 << endl; // Address of the fifth element

    cout << "_______________________________" << endl;

    // Moving the pointer forward by 2 elements and printing its address and value
    ptr += 2; // Move ptr to point to arr[2]
    cout << "Pointer after adding 2 (ptr): " << ptr << endl; // Address of arr[2]
    cout << "Value at new pointer position (*ptr): " << *ptr << endl; // Value at arr[2] (30)

    // Moving the pointer forward by 1 more element and printing
    ptr += 1; // Move ptr to point to arr[3]
    cout << "Pointer after adding 1 (ptr): " << ptr << endl; // Address of arr[3]
    cout << "Value at new pointer position (*ptr): " << *ptr << endl; // Value at arr[3] (40)

    // Moving the pointer back by 3 elements
    ptr -= 3; // Move ptr back to point to arr[0]
    cout << "_______________________________" << endl;

    // Using a loop to print the addresses and values of the array elements
    cout << "Printing addresses and incrementing ptr:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Current pointer address (ptr): " << ptr << endl; // Print current pointer address
        ptr++; // Increment the pointer to point to the next element (not allowed for array names)
    }

    return 0; // Return statement indicating successful completion
}
