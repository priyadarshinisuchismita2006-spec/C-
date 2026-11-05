//16.Write a C++ program to Swap variables using Function Overloading.
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    float x, y;
    char c1, c2;

    cout << "Enter two integers: ";
    cin >> a >> b;
    swap(a, b);
    cout << "After swapping: " << a << " " << b;

    cout << "\nEnter two float numbers: ";
    cin >> x >> y;
    swap(x, y);
    cout << "After swapping: " << x << " " << y;

    cout << "\nEnter two characters: ";
    cin >> c1 >> c2;
    swap(c1, c2);
    cout << "After swapping: " << c1 << " " << c2;

    return 0;
}
output:
	Enter two integers: 10 20
After swapping: 20 10

Enter two float numbers: 2.5 5.5
After swapping: 5.5 2.5

Enter two characters: A B
After swapping: B A
