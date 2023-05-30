#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
    int x;

    demo()
    {
        cout<<"Default constructor: "<<endl;
        x=2;
    }
    demo(int a)
    {
        cout<<"parameterized contructor: "<<endl;
        x=a;
    }
    demo(demo &b)
    {
        cout<<"Copy contructor: "<<endl;
        x=b.x+10;
    }
    display()
    {
        cout<<" X = "<<x<<endl;
    }
};
int main()
{
    demo d1;
    d1.display();
    demo d2(10);
    d2.display();
    demo d3(d2);
    d3.display();
}