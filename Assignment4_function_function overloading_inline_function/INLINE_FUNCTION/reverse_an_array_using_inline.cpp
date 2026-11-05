//21.	Write a C++ program to find the reverse the elements of an array using inline function.
#include <iostream>
using namespace std;

inline void reverse(int a[], int n)
{
    int i, temp;
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int a[100], n, i;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    reverse(a, n);

    cout << "Reversed array: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
/*output:Enter the size of array: 5
Enter array elements: 10 20 30 40 50
Reversed array: 50 40 30 20 10*/
