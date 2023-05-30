#include <iostream>
#include <conio.h>
using namespace std;

class A
{
public:
    int x;
    void get_x()
    {
        cout << "Enter x: ";
        cin >> x;
    }
};

class B : public A
{
public:
    int y;
    void get_y()
    {
        cout << "Enter y: ";
        cin >> y;
    }
    void print()
    {
        cout << "x * y = " << x * y << endl;
    }
};

int main()
{
    B b;
    b.get_x();
    b.get_y();
    b.print();
    return 0;
}