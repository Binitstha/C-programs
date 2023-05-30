#include<iostream>
using namespace std;

void add(int a,int b);
void add(double c,double d);
void add(int x, int y,double z);
int main ()
{
    add(10,20);
    add(10.5,20.5);
    add(10,20,30.5);
    return 0;
}
void add(int a,int b)
{
    cout<<(a+b)<<endl;
}
void add(double c,double d)
{
    cout<<(c+d)<<endl;
}
void add(int x,int y,double z)
{
    cout<<(x+y+z)<<endl;
}