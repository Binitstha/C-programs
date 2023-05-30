#include <iostream>
#include <conio.h>

using namespace std;

class distance
{
    int feet;
    int inches;

public:
    distance()
    {
        feet = 0;
        inches = 0;
    }
    distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void operator=(distance &obj)
    {
        feet = obj.feet;
        inches = obj.inches;
    }
    void display()
    {
        cout << "feet is: " << feet << endl;
        cout << "inches is: " << inches << endl;
    }
};
int main()
{
    distance d1(11, 10);
    distance d2(5, 11);
    d1.display();
    d2.display();
    d1 = d2;
    d1.display();
    getch();
}
