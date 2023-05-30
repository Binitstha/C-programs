#include<iostream>
#include<conio.h>
using namespace std;

class member
{
    private:
    static int x;
    static int y;
    static int z;
    public:
    void print ()
    {
        cout <<"The value of x is : "<<x<<endl;
        cout <<"The value of y is : "<<y<<endl;
        cout <<"The value of z is : "<<z<<endl;
    }
};
int member:: x=10;
int member:: y=20;
int member:: z=30;

int main()
{
    member m;
    m.print();
    return 0;
}