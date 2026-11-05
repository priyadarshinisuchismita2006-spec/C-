//1.Write a program to check whether the entered number is palindrome or not. The function returns 1 if the number is palindrome otherwise it returns 0.
#include <iostream>
using namespace std;

int palindrome(int n)
{
    int rem, rev = 0, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(palindrome(n) == 1)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";

    return 0;
}
 output: Enter a number: 121
Palindrome number

//2.	WAP to sort the elements of the array using bubble sort 
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[100], n, i;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    bubbleSort(a, n);

    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
 output: Enter size of array: 5
Enter elements: 5 2 4 1 3
Sorted array: 1 2 3 4 5
//3.	WAP to merge the elements of two arrays using function 
#include <iostream>
using namespace std;

void merge(int a[], int b[], int c[], int n, int m)
{
    int i;

    for(i = 0; i < n; i++)
        c[i] = a[i];

    for(i = 0; i < m; i++)
        c[n + i] = b[i];
}

int main()
{
    int a[50], b[50], c[100];
    int n, m, i;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter first array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter second array elements: ";
    for(i = 0; i < m; i++)
        cin >> b[i];

    merge(a, b, c, n, m);

    cout << "Merged array: ";
    for(i = 0; i < n + m; i++)
        cout << c[i] << " ";

    return 0;
}
output:Enter size of first array: 3
       Enter first array elements: 1 2 3
	   Enter size of second array: 2
       Enter second array elements: 4 5
       Merged array: 1 2 3 4 5
//4.Write a program to display nth term of Fibonacci series using function.
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    if(n == 1)
        return 0;

    if(n == 2)
        return 1;

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;

    cout << "Enter term number: ";
    cin >> n;

    if(n <= 0)
        cout << "Invalid term";
    else
        cout << "Nth term = " << fibonacci(n);

    return 0;
}
output: Enter term number: 7
		Nth term = 8
//5.	WAP to take input ,add  and display the elements of the matrix using function 
#include <iostream>
using namespace std;
void input(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> a[i][j];
}

int add(int a[10][10], int r, int c)
{
    int i, j, sum = 0;

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum = sum + a[i][j];

    return sum;
}

void display(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    int a[10][10], r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements: ";
    input(a, r, c);

    cout << "Matrix:\n";
    display(a, r, c);

    cout << "Sum of elements = " << add(a, r, c);

    return 0;
}
output:Enter rows and columns: 2 2
  		Enter matrix elements: 1 2 3 4
Matrix:
1 2
3 4
Sum of elements = 10
//6.	WAP to add two matrix using function 
#include <iostream>
using namespace std;

void multiply(int a[10][10], int b[10][10],
              int c[10][10], int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    cout << "Enter first matrix: ";
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix: ";
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            cin >> b[i][j];

    multiply(a, b, c, r1, c1, c2);

    cout << "Product of matrices:\n";
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    return 0;
}
output:
Enter rows and columns of first matrix: 2 2
Enter rows and columns of second matrix: 2 2
Enter first matrix: 1 2 3 4
Enter second matrix: 5 6 7 8
Product of matrices:
19 22
43 50
//7.WAP to multiply two matrix using function 
#include <iostream>
using namespace std;

void multiply(int a[10][10], int b[10][10],
              int c[10][10], int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    cout << "Enter first matrix: ";
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix: ";
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            cin >> b[i][j];

    multiply(a, b, c, r1, c1, c2);

    cout << "Product of matrices:\n";
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    return 0;
}
output:
Enter rows and columns of first matrix: 2 2
Enter rows and columns of second matrix: 2 2
Enter first matrix: 1 2 3 4
Enter second matrix: 5 6 7 8
Product of matrices:
19 22
43 50
//8.	WAP to check whether the matrix is symmetric or not using function and print the result in main(). 
#include <iostream>
using namespace std;

int symmetric(int a[10][10], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                return 0;

    return 1;
}

int main()
{
    int a[10][10], n, i, j, result;

    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements: ";
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    result = symmetric(a, n);

    if(result == 1)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}
output:
Enter order of matrix: 2
Enter matrix elements: 1 2 2 3
Matrix is symmetric
//9.	WAP to display a string using function.
#include <iostream>
using namespace std;

void display(char str[])
{
    cout << "String = " << str;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    display(str);

    return 0;
}
output:
Enter a string: Hello World
String = Hello World
//10.	WAP to implement strlen() using a user-defined function.
#include <iostream>
using namespace std;

int length(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length = " << length(str);

    return 0;
}
Enter a string: Hello World
String = Hello World
output:
//11.	Write a user defined function to convert lower case character of the string to upper case.
#include <iostream>
using namespace std;

void uppercase(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    uppercase(str);

    cout << "Uppercase string = " << str;

    return 0;
}
output:
Enter a string: Hello World
Uppercase string = HELLO WORLD
//12.	WAP to implement strcat() using a user defined function 
#include <iostream>
using namespace std;

void concatenate(char s1[], char s2[])
{
    int i = 0, j = 0;

    while(s1[i] != '\0')
        i++;

    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

int main()
{
    char s1[200], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 200);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    concatenate(s1, s2);

    cout << "Concatenated string = " << s1;

    return 0;
}
output:
Enter first string: Hello
Enter second string: World
Concatenated string = HelloWorld
//13.	WAP to implement strcmp() using a user defined function
#include <iostream>
using namespace std;

int compare(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;

    return s1[i] - s2[i];
}

int main()
{
    char s1[100], s2[100];
    int result;

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    result = compare(s1, s2);

    if(result == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
output:
Enter first string: Hello
Enter second string: Hello
Strings are equal
