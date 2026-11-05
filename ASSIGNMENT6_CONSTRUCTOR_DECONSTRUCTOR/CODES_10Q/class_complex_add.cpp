//3.	WAP to define a class COMPLEX having members as real, and imag. Define a user-defined function ADDCOMPLEX () which will receive two objects as its arguments and will return aa object. 
//Use the default constructor and parameterized constructors to initialize the data members of COMPLEX class
#include <iostream>
using namespace std;

class COMPLEX
{
    int real, imag;

public:
    COMPLEX()
    {
        real = 0;
        imag = 0;
    }

    COMPLEX(int r, int i)
    {
        real = r;
        imag = i;
    }

    COMPLEX ADDCOMPLEX(COMPLEX c1, COMPLEX c2)
    {
        COMPLEX temp;

        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    COMPLEX c1(5, 3), c2(4, 2), c3;

    c3 = c3.ADDCOMPLEX(c1, c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    cout << "\nSum: ";
    c3.display();

    return 0;
}
output:
	First Complex Number: 5 + 3i
Second Complex Number: 4 + 2i
Sum: 9 + 5i
