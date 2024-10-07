#include <iostream>

using namespace std;

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };

    // Printing the memory address of the array (address of the first element)
    cout << "Address of first element: " << arr << endl;       // Address of the first element (same as &arr[0])
    cout << "Address of first element: " << arr + 0 << endl;   // Same as arr
    cout << "Address of first element: " << &arr << endl;      // Address of the array itself
    cout << "Address of first element: " << &arr[0] << endl;   // Address of the first element

    cout << "_________________________________________________" << endl;

    // Printing the value at the first element of the array
    cout << "Value at the first element (*arr): " << *arr << endl;     // Dereferencing the pointer to get the value (10)
    cout << "Value at the first element (arr[0]): " << arr[0] << endl; // Accessing the first element using subscript

    cout << "_________________________________________________" << endl;

    // Printing addresses of each element in the array
    cout << "Addresses of elements in the array:" << endl;
    cout << "Address of arr[0]: " << arr + 0 << endl; // Address of the first element
    cout << "Address of arr[1]: " << arr + 1 << endl; // Address of the second element
    cout << "Address of arr[2]: " << arr + 2 << endl; // Address of the third element
    cout << "Address of arr[3]: " << arr + 3 << endl; // Address of the fourth element
    cout << "Address of arr[4]: " << arr + 4 << endl; // Address of the fifth element

    cout << "_________________________________________________" << endl;

    // Printing values of each element in the array using pointer arithmetic
    cout << "Values of elements using pointer arithmetic:" << endl;
    cout << "Value of arr[0]: " << *(arr + 0) << endl; // Value at the first element
    cout << "Value of arr[1]: " << *(arr + 1) << endl; // Value at the second element
    cout << "Value of arr[2]: " << *(arr + 2) << endl; // Value at the third element
    cout << "Value of arr[3]: " << *(arr + 3) << endl; // Value at the fourth element
    cout << "Value of arr[4]: " << *(arr + 4) << endl; // Value at the fifth element

    cout << "_________________________________________________" << endl;

    // Printing values of each element using a loop with pointer arithmetic
    cout << "Values of elements using a loop and pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Value at arr[" << i << "] = " << *(arr + i) << endl; // Value of each element accessed through pointer arithmetic
    }

    cout << "_________________________________________________" << endl;

    // Printing values of each element using a loop with array subscript
    cout << "Values of elements using a loop and array indexing:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Value at arr[" << i << "] = " << arr[i] << endl; // Value of each element accessed using array indexing
    }

}