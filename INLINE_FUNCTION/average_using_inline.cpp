//22.	WAP to find average of the element present in  the array using inline function.
 #include <iostream>
using namespace std;

inline float average(int a[], int n)
{
    int sum = 0, i;

    for(i = 0; i < n; i++)
        sum = sum + a[i];

    return (float)sum / n;
}

int main()
{
    int a[100], n, i;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "Average = " << average(a, n);

    return 0;
}
/*Enter the size of array: 4
Enter array elements: 10 20 30 40
Average = 25*/
