// Program to illustrate funtion template to add two number
#include <iostream>
#include <conio.h>
using namespace std;
template<class T>
T add (T a,T b)
{
    return (a+b);
}
int main()
{
    int result1;
    double result2;
    result1=add<int>(2,4);
    cout<<"The sum of int numbers : "<<result1<<endl;
    result2=add<double>(2.3,3.4);
    cout<<"The sum of decimal number : "<<result2<<endl;
    return 0;
}