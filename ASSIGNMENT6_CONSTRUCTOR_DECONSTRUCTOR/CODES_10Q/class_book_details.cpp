//8.WAP to define a class BOOK having members as title, author name, no. of pages, and price. 
//Initialize the data members using constructors. Enter the details of a book and display them. 
#include <iostream>
using namespace std;

class BOOK
{
    char title[50];
    char author[30];
    int pages;
    float price;

public:
    BOOK(char t[], char a[], int p, float pr)
    {
        int i;

        for(i = 0; t[i] != '\0'; i++)
            title[i] = t[i];
        title[i] = '\0';

        for(i = 0; a[i] != '\0'; i++)
            author[i] = a[i];
        author[i] = '\0';

        pages = p;
        price = pr;
    }

    void display()
    {
        cout << "\nBook Details";
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nNumber of Pages: " << pages;
        cout << "\nPrice: " << price;
    }
};

int main()
{
    BOOK b("C++ Programming", "Balagurusamy", 500, 450);

    b.display();

    return 0;
}
output:
	Book Details
Title: C++ Programming
Author: Balagurusamy
Number of Pages: 500
Price: 450
