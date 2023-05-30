// Create a class rectangle and circle as a base class and shape as a derive class and find the area of a shape.
// without using private.
#include<iostream>
#include <conio.h>
#define pi 3.14
using namespace std;
class rectangle
{
public:
    int l;
    int b;
    void getdata()
    {
        cout << "Enter the length and breath of the rectangle" << endl;
        cin >> l >> b;
    }
};

class circle
{
public:
    int r;
    void getdata1()
    {
        cout << "Enter the radius of the circle" << endl;
        cin >> r;
    }
};

class shape : public rectangle, public circle
{
public:
    int area_rec;
    float area_cir;
    void area()
    {
        area_rec = l * b;
        area_cir = r * pi * r;
    }
    void display()
    {
        cout << "The area of the rectangle is = " << area_rec << endl;
        cout << "The area of the circle is = " << area_cir << endl;
    }
};

int main()
{
    shape s;
    s.getdata();
    s.getdata1();
    s.area();
    s.display();
    return 0;
}