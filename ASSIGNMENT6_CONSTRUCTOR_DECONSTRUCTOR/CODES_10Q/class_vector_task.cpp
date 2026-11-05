/*10.WAP TO DEFINE A CLASS VECTOR (A SERIES OF FLOAT VALUES).INCLUDES MEMBER FUNCTION TO PERFORM THE FOLLOWING TASK:
	a.TO CREATE A VECTOR.
	b.TO MODIFY THE VALUES OF A GIVEN ELEMENTS.
	c.TO MULTIPY THE SCALAR VALUE.
	d.TO DISPLAY THE VECTOR */
#include <iostream>
using namespace std;

class VECTOR
{
    float v[10];
    int n;

public:

    // To create a vector
    void create()
    {
        cout << "Enter the number of elements: ";
        cin >> n;

        cout << "Enter vector elements:\n";

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
    }

    // To modify an element
    void modify()
    {
        int pos;
        float value;

        cout << "Enter position to modify: ";
        cin >> pos;

        if(pos >= 1 && pos <= n)
        {
            cout << "Enter new value: ";
            cin >> value;

            v[pos - 1] = value;
        }
        else
        {
            cout << "Invalid position!";
        }
    }

    // To multiply by scalar value
    void multiply()
    {
        float scalar;

        cout << "Enter scalar value: ";
        cin >> scalar;

        for(int i = 0; i < n; i++)
        {
            v[i] = v[i] * scalar;
        }
    }

    // To display vector
    void display()
    {
        cout << "Vector: ";

        for(int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    VECTOR v;

    v.create();

    cout << "\nOriginal ";
    v.display();

    v.modify();

    cout << "\nAfter Modification ";
    v.display();

    v.multiply();

    cout << "\nAfter Scalar Multiplication ";
    v.display();

    return 0;
}
output:
Enter the number of elements: 4
Enter vector elements:
2 4 6 8

Original Vector: 2 4 6 8

Enter position to modify: 2
Enter new value: 10

After Modification Vector: 2 10 6 8

Enter scalar value: 3

After Scalar Multiplication Vector: 6 30 18 24	
