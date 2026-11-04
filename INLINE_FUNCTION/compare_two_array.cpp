//23.	WAP using a inline function compare() to check whether two arrays are equal or not and print the result in main() 
#include <iostream>
using namespace std;

inline bool compare(int a[], int b[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a[100], b[100], n, i, result;

    cout << "Enter the size of arrays: ";
    cin >> n;

    cout << "Enter first array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter second array elements: ";
    for(i = 0; i < n; i++)
        cin >> b[i];

    result = compare(a, b, n);

    if(result == 1)
        cout << "Arrays are equal";
    else
        cout << "Arrays are not equal";

    return 0;
}
/*Enter the size of arrays: 3
Enter first array elements: 1 2 3
Enter second array elements: 1 2 3
Arrays are equal

Enter the size of arrays: 3
Enter first array elements: 1 2 3
Enter second array elements: 1 2 4
Arrays are not equal*/
