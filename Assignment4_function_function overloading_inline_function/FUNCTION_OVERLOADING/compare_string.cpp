//17.Write a C++ Program to Compare Two Strings using Overloading.
#include <iostream>
#include <cstring>
using namespace std;

void compare(char a[], char b[])
{
    if(strcmp(a, b) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}

void compare(string a, string b)
{
    if(a == b)
        cout << "\nStrings are equal";
    else
        cout << "\nStrings are not equal";
}

int main()
{
    char str1[50], str2[50];
    string s1, s2;

    cout << "Enter two character arrays: ";
    cin >> str1 >> str2;
    compare(str1, str2);

    cout << "\nEnter two strings: ";
    cin >> s1 >> s2;
    compare(s1, s2);

    return 0;
}
output:
	Enter two character arrays: Hello Hello
Strings are equal

Enter two strings: India Odisha
Strings are not equal
