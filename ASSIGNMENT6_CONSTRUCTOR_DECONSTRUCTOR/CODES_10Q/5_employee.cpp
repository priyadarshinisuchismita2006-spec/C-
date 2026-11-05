7.	WAP to define a class EMPLOYEE having elements as name, emp_id, department, age, and salary. Enter the details of 5 employees. Display the details of those employees whose salary is greater than the average salary value of all employees. 
#include <iostream>
using namespace std;

class EMPLOYEE
{
    char name[30];
    int emp_id;
    char department[20];
    int age;
    float salary;

public:
    void input()
    {
        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    float getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nDepartment: " << department;
        cout << "\nAge: " << age;
        cout << "\nSalary: " << salary << "\n";
    }
};

int main()
{
    EMPLOYEE e[5];
    float total = 0, avg;

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter Employee " << i + 1 << " Details:";
        e[i].input();
        total = total + e[i].getSalary();
    }

    avg = total / 5;

    cout << "\nAverage Salary = " << avg;

    cout << "\n\nEmployees Having Salary Greater Than Average:";

    for(int i = 0; i < 5; i++)
    {
        if(e[i].getSalary() > avg)
            e[i].display();
    }

    return 0;
}
output:
	Average Salary = 30000

Employees Having Salary Greater Than Average:

Name: Rahul
Employee ID: 101
Department: HR
Age: 25
Salary: 40000

Name: Priya
Employee ID: 103
Department: IT
Age: 26
Salary: 50000
