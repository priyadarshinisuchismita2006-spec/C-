////4.WAP to define a class STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students using default and parameterized constructors.
// //Display the details of the student having the highest CGPA. 
#include <iostream>
using namespace std;

class STUDENT
{
    char name[30];
    int roll_no;
    char branch[20];
    float cgpa;

public:
    STUDENT()
    {
        roll_no = 0;
        cgpa = 0;
    }

    STUDENT(char n[], int r, char b[], float c)
    {
        int i;

        for(i = 0; n[i] != '\0'; i++)
            name[i] = n[i];
        name[i] = '\0';

        roll_no = r;

        for(i = 0; b[i] != '\0'; i++)
            branch[i] = b[i];
        branch[i] = '\0';

        cgpa = c;
    }

    float getCGPA()
    {
        return cgpa;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll_no;
        cout << "\nBranch: " << branch;
        cout << "\nCGPA: " << cgpa;
    }
};

int main()
{
    STUDENT s[5] =
    {
        STUDENT("Rahul", 101, "IMCA", 8.5),
        STUDENT("Priya", 102, "IMCA", 9.2),
        STUDENT("Amit", 103, "IMCA", 8.7),
        STUDENT("Neha", 104, "IMCA", 9.5),
        STUDENT("Ravi", 105, "IMCA", 8.9)
    };

    int max = 0;

    for(int i = 1; i < 5; i++)
    {
        if(s[i].getCGPA() > s[max].getCGPA())
            max = i;
    }

    cout << "Student Having Highest CGPA:";
    s[max].display();

    return 0;
}
output:
	Student Having Highest CGPA:
Name: Neha
Roll Number: 104
Branch: IMCA
CGPA: 9.5
