#include <iostream>

using namespace std;

class Time
{
    int _hours, _minutes, _seconds ;

public:

    // By declaring Print_Time() as a constant member function, it allows constant objects to call this function.
    void Print_Time() const     // constant member function
    {
        cout << "Time is: " << _hours << ":" << _minutes << ":" << _seconds << endl ;
    }

    Time(int hours, int minutes, int seconds)
    {
        _hours   = hours ;
        _minutes = minutes ;
        _seconds = seconds ;
    }

};

int main()
{
    // When you define an object of type const, only the const functions can access objects
    // But when defining object is not of the const type, it can reach all functions, whether const or not

    const Time noon(12, 0, 0) ;     // noon is constant object
    noon.Print_Time() ;

    Time night(8, 0, 0) ;
    night.Print_Time() ;

    return 0;
}
