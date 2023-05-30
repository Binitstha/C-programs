#include<iostream>
#include<conio.h>
using namespace std;

int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter the number : "<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    return 0;
}