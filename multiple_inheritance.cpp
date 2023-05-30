// Example of multilevel inheritance
#include <iostream>
#include <conio.h>
using namespace std;

class A
{

public:
    int x;
    void Setx()
    {
        cout << "Enter x :" << endl;
        cin >> x;
    }
    void print()
    {
        cout << "x is : " << x << endl;
    }
};
class B
{

public:
    int y;
    void sety()
    {
        cout << "Enter y :" << endl;
        cin >> y;
    }
    void print1()
    {
        cout << "Y is : " << y << endl;
    }
};
class C : public A, public B
{

public:
    int z;
    void setz()
    {
        cout << "Enter z :" << endl;
        cin >> z;
    }
    void print2()
    {
        cout << "z is : " << z << endl;
    }
    void mul()
    {
        cout << "mul = " << x * y * z << endl;
    }
};
int main()
{
    C c;
    c.Setx();
    c.sety();
    c.setz();
    c.print();
    c.print1();
    c.print2();
    c.mul();
    return 0;
}