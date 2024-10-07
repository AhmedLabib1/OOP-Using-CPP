#include<iostream>
using namespace std;

class clsCalculator {
private:
    float _Result = 0;        // Stores the current result
    float _LastNumber = 0;    // Stores the last input number
    string _LastOperation = "Clear"; // Stores the last operation performed
    float _PerviousResult = 0; // Stores the result before the last operation

    // Helper function to check if a number is zero
    bool _IsZero(float Number) {
        return Number == 0;
    }

public:
    // Adds a number to the current result
    void Add(float Number) {
        _LastNumber = Number;
        _PerviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    // Subtracts a number from the current result
    void Subtract(float Number) {
        _LastNumber = Number;
        _PerviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    // Divides the current result by a number (handles division by zero)
    void Divide(float Number) {
        _LastNumber = Number;
        if (_IsZero(Number)) {
            Number = 1; // Avoid division by zero
        }
        _PerviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    // Multiplies the current result by a number
    void Multiply(float Number) {
        _LastNumber = Number;
        _PerviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }

    // Resets the calculator to its initial state
    void Clear() {
        _Result = 0;
        _LastNumber = 0;
        _LastOperation = "Clear";
        _PerviousResult = 0;
    }

    // Cancels the last operation, restoring the previous result
    void CancelLastOperation() {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
        _Result = _PerviousResult;
    }

    // Prints the result of the last operation
    void PrintResult() {
        cout << "Result After " << _LastOperation << " " << _LastNumber << " is " << _Result << endl;
    }
};

int main() {
    clsCalculator Calculator1;

    Calculator1.Add(10); // Perform addition
    Calculator1.PrintResult(); // Output: Result After Adding 10 is 10
}
