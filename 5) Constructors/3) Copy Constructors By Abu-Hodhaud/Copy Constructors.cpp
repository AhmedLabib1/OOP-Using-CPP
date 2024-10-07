#include<iostream>

using namespace std;

// Definition of the clsAdress class
class clsAdress
{
private:
    // Private member variables
    string _AdressLine1;  // First line of the address
    string _AdressLine2;  // Second line of the address
    string _ZipCode;      // Zip code
    string _POBox;        // PO Box

public:
    // Constructor to initialize the object with values
    clsAdress(string AdressLine1, string AdressLine2, string ZipCode, string POBox)
    {
        _AdressLine1 = AdressLine1;
        _AdressLine2 = AdressLine2;
        _ZipCode = ZipCode;
        _POBox = POBox;
    }

    // Setter for AdressLine1
    void setAdressLine1(string AdressLine1)
    {
        _AdressLine1 = AdressLine1;
    }

    // Getter for AdressLine1
    string getAdressLine1()
    {
        return _AdressLine1;
    }

    // Setter for AdressLine2
    void setAdressLine2(string AdressLine2)
    {
        _AdressLine2 = AdressLine2;
    }

    // Getter for AdressLine2
    string getAdressLine2()
    {
        return _AdressLine2;
    }

    // Setter for ZipCode
    void setZipCode(string ZipCode)
    {
        _ZipCode = ZipCode;
    }

    // Getter for ZipCode
    string getZipCode()
    {
        return _ZipCode;
    }

    // Setter for POBox
    void setPOBox(string POBox)
    {
        _POBox = POBox;
    }

    // Getter for POBox
    string getPOBox()
    {
        return _POBox;
    }

    // Method to print the address details
    void Print()
    {
        cout << "\nAddress Details:" << endl;
        cout << "------------------------";
        cout << "\nAddressLine1  : " << _AdressLine1 << endl;
        cout << "AddressLine2  : " << _AdressLine2 << endl;
        cout << "POBox         : " << _POBox << endl;
        cout << "ZipCode       : " << _ZipCode << endl;
    }
};

int main()
{
    // Creating an instance of clsAdress and initializing it with values
    clsAdress Adress1("Elzoqhpy street", "manara el3ola street", "606015", "1526485");
    
    // Printing the details of Adress1
    Adress1.Print();

    // Copying Adress1 into Adress2 using the default copy constructor
    clsAdress Adress2 = Adress1;
    
    // Printing the details of Adress2 (which is a copy of Adress1)
    Adress2.Print();
}
