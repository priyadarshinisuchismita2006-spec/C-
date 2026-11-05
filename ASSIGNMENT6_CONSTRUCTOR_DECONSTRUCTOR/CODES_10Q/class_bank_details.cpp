/*9.WAP to define a class to represent bank account. Include the following members :
             Data member : 
				1. Name of depositor.
				2.	Account number
				3.	Type of Account.
				4.	Balance in the Account.

             Member functions :
			1.	To assign initial values.
			2.	To deposit the amount.
			3.	To withdraw an amount after checking the balance.
			4.	To display the name and balance.
          Create an object and display the name and balance.*/
 #include <iostream>
using namespace std;

class BANK
{
    char name[30];
    int account_no;
    char type[20];
    float balance;

public:
    void assign()
    {
        cout << "Enter Depositor Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> account_no;

        cout << "Enter Account Type: ";
        cin >> type;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount Deposited Successfully.";
        }
        else
            cout << "Invalid Amount.";
    }

    void withdraw()
    {
        float amount;

        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully.";
        }
        else
            cout << "Insufficient Balance or Invalid Amount.";
    }

    void display()
    {
        cout << "\n\nAccount Holder: " << name;
        cout << "\nBalance: " << balance;
    }
};

int main()
{
    BANK b;

    b.assign();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
output:
      Enter Depositor Name: Rahul
Enter Account Number: 12345
Enter Account Type: Savings
Enter Initial Balance: 10000

Enter Amount to Deposit: 2000
Amount Deposited Successfully.

Enter Amount to Withdraw: 3000
Amount Withdrawn Successfully.

Account Holder: Rahul
Balance: 9000   
