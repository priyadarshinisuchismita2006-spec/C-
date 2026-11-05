//18.Write a C++ program to find Volume of Cube, Cylinder, Sphere using Function Overloading.
#include <iostream>
using namespace std;

float volume(float s)
{
    return s * s * s;
}

float volume(float r, float h)
{
    return 3.14 * r * r * h;
}

double volume(double r, int x)
{
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

int main()
{
    float s, r, h;
    double radius;

    cout << "Enter side of cube: ";
    cin >> s;
    cout << "Volume of Cube = " << volume(s);

    cout << "\nEnter radius and height of cylinder: ";
    cin >> r >> h;
    cout << "Volume of Cylinder = " << volume(r, h);

    cout << "\nEnter radius of sphere: ";
    cin >> radius;
    cout << "Volume of Sphere = " << volume(radius, 1);

    return 0;
}
output:
	Enter side of cube: 3
Volume of Cube = 27

Enter radius and height of cylinder: 2 5
Volume of Cylinder = 62.8

Enter radius of sphere: 3
Volume of Sphere = 113.04
