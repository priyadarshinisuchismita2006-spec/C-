//6.WAP to define a class DISTANCE having members as kms, and metres. Define a user-defined function ADDDISTANCE() which will receive two objects as its arguments and will return an object.
//The ADDDISTANCE () will add two distance values.
#include <iostream>
using namespace std;

class DISTANCE
{
    int kms, metres;

public:
    DISTANCE()
    {
        kms = 0;
        metres = 0;
    }

    DISTANCE(int k, int m)
    {
        kms = k;
        metres = m;
    }

    DISTANCE ADDDISTANCE(DISTANCE d1, DISTANCE d2)
    {
        DISTANCE temp;

        temp.metres = d1.metres + d2.metres;
        temp.kms = d1.kms + d2.kms + temp.metres / 1000;

        temp.metres = temp.metres % 1000;

        return temp;
    }

    void display()
    {
        cout << kms << " Kilometres "
             << metres << " Metres";
    }
};

int main()
{
    DISTANCE d1(5, 800);
    DISTANCE d2(3, 500);
    DISTANCE d3;

    d3 = d3.ADDDISTANCE(d1, d2);

    cout << "First Distance: ";
    d1.display();

    cout << "\nSecond Distance: ";
    d2.display();

    cout << "\nTotal Distance: ";
    d3.display();

    return 0;
}
output:
 First Distance: 5 Kilometres 800 Metres
Second Distance: 3 Kilometres 500 Metres
Total Distance: 9 Kilometres 300 Metres
