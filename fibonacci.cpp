//Enter the number through the keyboard and find the fibonacci series upto entered number.
#include<iostream>
#include<conio.h>

using namespace  std;

int main()
{
    int f1=1;
    int f2=1;
    int num,f3,i;
    cout<<"Enter the number\n";
    cin>>num;

    cout<<f1<<endl;cout<<f2<<endl;
    for(i=1;i<=num;i++)
    {
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
    }
getch();
}
