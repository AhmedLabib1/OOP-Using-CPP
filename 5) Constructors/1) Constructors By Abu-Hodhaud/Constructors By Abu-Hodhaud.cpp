#include<iostream>
using namespace std;

class clsAdress {
private:
    string _AdressLine1;   // First line of the address
    string _AdressLine2;   // Second line of the address
    string _ZipCode;       // Zip code of the address
    string _POBox;         // P.O. Box number

public:
    // Constructor to initialize address details
    clsAdress(string AdressLine1, string AdressLine2, string ZipCode, string POBox) {
        _AdressLine1 = AdressLine1;
        _AdressLine2 = AdressLine2;
        _ZipCode = ZipCode;
        _POBox = POBox;
    }

    // Setter and Getter for AdressLine1
    void setAdressLine1(string AdressLine1) {
        _AdressLine1 = AdressLine1;
    }
    string getAdressLine1() {
        return _AdressLine1;
    }

    // Setter and Getter for AdressLine2
    void setAdressLine2(string AdressLine2) {
        _AdressLine2 = AdressLine2;
    }
    string getAdressLine2() {
        return _AdressLine2;
    }

    // Setter and Getter for ZipCode
    void setZipCode(string ZipCode) {
        _ZipCode = ZipCode;
    }
    string getZipCode() {
        return _ZipCode;
    }

    // Setter and Getter for POBox
    void setPOBox(string POBox) {
        _POBox = POBox;
    }
    string getPOBox() {
        return _POBox;
    }

    // Method to print the address details
    void Print() {
        cout << "\nAddress Details:" << endl;
        cout << "------------------------" << endl;
        cout << "AddressLine1  : " << _AdressLine1 << endl;
        cout << "AddressLine2  : " << _AdressLine2 << endl;
        cout << "POBox         : " << _POBox << endl;
        cout << "ZipCode       : " << _ZipCode << endl;
    }
};

int main() {
    // Creating an address object with the details
    clsAdress Adress1("Elzoqhpy street", "Manara el3ola street", "606015", "1526485");

    // Printing the address details
    Adress1.Print();
}
