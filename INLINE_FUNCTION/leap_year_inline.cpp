//24.	Write a C++ program to check whether entered year is leap year or not using inline function.
#include <iostream>
using namespace std;

inline bool leapyear(int year)
{
    return (year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0));
}

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if(leapyear(year))
        cout << "Leap year";
    else
        cout << "Not a leap year";

    return 0;
}
/*Enter a year: 2024
Leap year

Enter a year: 1900
Not a leap year*/
