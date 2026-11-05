//2.	WAP to calculate factorial of a given number using copy constructor.
#include <iostream>
using namespace std;

class Factorial
{
    int n;

public:
    Factorial(int x)
    {
        n = x;
    }

    Factorial(Factorial &obj)
    {
        n = obj.n;
    }

    void calculate()
    {
        int fact = 1;

        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial = " << fact;
    }
};

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    Factorial f1(num);
    Factorial f2(f1);

    f2.calculate();

    return 0;
}
output:
	Enter a number: 5
Factorial = 120
