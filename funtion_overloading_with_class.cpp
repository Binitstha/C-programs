// WAP using class example of funtion overloading 
#include<iostream>
#include<conio.h>
using namespace std;

class method
{
    public:
    void display(int i)
    {
        cout<<"display i: "<<i<<endl;
    }
    void display(double j)
    {
        cout<<"display j: "<<j<<endl;
    }
};
int main()
{
    method m;
    m.display(2);
    m.display(2.4);
    getch();
}