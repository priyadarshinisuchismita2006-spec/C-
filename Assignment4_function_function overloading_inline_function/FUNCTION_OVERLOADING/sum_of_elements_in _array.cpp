//19.Write a C++ program to find the sum of the elements of an array using function with default argument.
//Code
#include <iostream>
using namespace std;

int sum(int a[], int n = 5)
{
    int s = 0;

    for(int i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    return s;
}

int main()
{
    int a[5], n;

    cout << "Enter 5 array elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Sum using default argument = " << sum(a);

    cout << "\nEnter number of elements to add (maximum 5): ";
    cin >> n;

    if(n >= 1 && n <= 5)
        cout << "Sum = " << sum(a, n);
    else
        cout << "Invalid number of elements";

    return 0;
}
output:
	Enter 5 array elements: 10 20 30 40 50
Sum using default argument = 150

Enter number of elements to add (maximum 5): 3
Sum = 60
