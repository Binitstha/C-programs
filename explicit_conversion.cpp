#include<iostream>
#include<conio.h>
#include<typeinfo>
using namespace std;

int main()
{
    double x=4.2;
    cout<<"The value of x : "<<x<<endl;
    int y=(int)x;
    cout<<"The value of y : "<<y<<endl;
    double x1= (double)y;
    cout<<"The value x1 : "<<x1<<endl;
    cout<<"the data type of x1 : "<<typeid(x1).name();
    return 0;
}