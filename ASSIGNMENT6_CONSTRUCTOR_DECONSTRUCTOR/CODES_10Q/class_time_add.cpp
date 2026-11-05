//5. WAP to define a class TIME having members as hour, minute, and second. Define a user-defined function ADDTIME () which will receive two objects as its arguments and will return an object. 
//The ADDTIME () will add two different time values.
#include <iostream>
using namespace std;

class TIME
{
    int hour, minute, second;

public:
    TIME()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    TIME(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    TIME ADDTIME(TIME t1, TIME t2)
    {
        TIME temp;

        temp.second = t1.second + t2.second;
        temp.minute = t1.minute + t2.minute + temp.second / 60;
        temp.second = temp.second % 60;

        temp.hour = t1.hour + t2.hour + temp.minute / 60;
        temp.minute = temp.minute % 60;

        return temp;
    }

    void display()
    {
        cout << hour << " Hours "
             << minute << " Minutes "
             << second << " Seconds";
    }
};

int main()
{
    TIME t1(2, 45, 50);
    TIME t2(1, 30, 25);
    TIME t3;

    t3 = t3.ADDTIME(t1, t2);

    cout << "First Time: ";
    t1.display();

    cout << "\nSecond Time: ";
    t2.display();

    cout << "\nAdded Time: ";
    t3.display();

    return 0;
}
output:
	First Time: 2 Hours 45 Minutes 50 Seconds
Second Time: 1 Hours 30 Minutes 25 Seconds
Added Time: 4 Hours 16 Minutes 15 Seconds
