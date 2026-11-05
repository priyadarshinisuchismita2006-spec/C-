//15. Write a C++ program to find area of a Tringle, Rectangle, Circle and Square using Function Overloading.
#include <iostream>
using namespace std;

float area(float b, float h)
{
    return 0.5 * b * h;
}

int area(int l, int b)
{
    return l * b;
}

float area(double r)
{
    return 3.14 * r * r;
}

int area(int s)
{
    return s * s;
}

int main()
{
    float b, h, r;
    int l, w, s;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle = " << area(b, h);

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> w;
    cout << "Area of Rectangle = " << area(l, w);

    cout << "\nEnter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area((double)r);

    cout << "\nEnter side of square: ";
    cin >> s;
    cout << "Area of Square = " << area(s);

    return 0;
}
output:
	Enter base and height of triangle: 10 5
Area of Triangle = 25

Enter length and breadth of rectangle: 10 5
Area of Rectangle = 50

Enter radius of circle: 7
Area of Circle = 153.86

Enter side of square: 4
Area of Square = 16
