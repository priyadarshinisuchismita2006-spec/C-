//14. Write a C++ Program with three different functions with same name to find the sum of digits using function overloading.
#include <iostream>
using namespace std;

int sum(int n)
{
    int s = 0;
    while(n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}

int sum(int a, int b)
{
    return a + b;
}

int sum(float n)
{
    int s = 0;
    int x = (int)n;

    while(x > 0)
    {
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}

int main()
{
    int n, a, b;
    float x;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Su
	sum of digits = " << sum(n);

    cout << "\nEnter two numbers: ";
    cin >> a >> b;
    cout << "\nSum = " << sum(a, b);

    cout << "\nEnter a decimal number: ";
    cin >> x;
    cout << "\nSum of digits = " << sum(x);

    return 0;
}
output:
	Enter a number: 1234
Sum of digits = 10

Enter two numbers: 10 20
Sum = 30

Enter a decimal number: 456
Sum of digits = 15


