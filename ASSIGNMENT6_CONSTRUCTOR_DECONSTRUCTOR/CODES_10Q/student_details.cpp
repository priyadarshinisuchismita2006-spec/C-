//1.	WAP to print student details using constructor and destructor:
#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    char name[30];
    char branch[20];

public:
    Student()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "\nStudent Details";
        cout << "\nRoll Number: " << roll_no;
        cout << "\nName: " << name;
        cout << "\nBranch: " << branch;
    }

    ~Student()
    {
        cout << "\n\nDestructor called.";
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}
output:
	Enter Roll Number: 101
Enter Name: Rahul
Enter Branch: IMCA

Student Details
Roll Number: 101
Name: Rahul
Branch: IMCA

Destructor called.
