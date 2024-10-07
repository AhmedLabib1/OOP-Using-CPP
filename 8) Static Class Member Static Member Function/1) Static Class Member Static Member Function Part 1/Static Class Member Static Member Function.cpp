#include <iostream>
#include <cstring>

using namespace std;

class Product {
private:
    static int productCount; // Static variable to count the number of products
    char name[30];           // Product name
    float price;             // Product price

public:
    // Static function to print the current product count
    static void PrintProductCount() {
        cout << "Total number of products: " << productCount << endl;
    }

    // Default constructor
    Product() {
        strcpy(name, "Unnamed"); // Initialize name to "Unnamed"
        price = 0.0;             // Initialize price to 0.0
        productCount++;          // Increment product count
        PrintProductCount();     // Print current product count
    }

    // Parameterized constructor
    Product(const char* name, float price) {
        strcpy(this->name, name); // Set product name
        this->price = price;       // Set product price
        productCount++;            // Increment product count
        PrintProductCount();       // Print current product count
    }

    // Member function to display product details
    void DisplayProduct() {
        cout << "Product Name: " << name << ", Price: " << price << endl;
    }
};

// Initialize static member variable
int Product::productCount = 0;

int main() {
    // Display initial product count
    Product::PrintProductCount();

    cout << "\nCreating Product objects:" << endl;

    // Create individual Product objects
    Product product1("Laptop", 999.99);
    Product product2("Smartphone", 499.99);

    cout << "\nCreating an array of Product objects:" << endl;

    // Create an array of Product objects
    Product productArray[3];

    // Display details of the first two products
    product1.DisplayProduct();
    product2.DisplayProduct();

    return 0; // Successful completion
}
