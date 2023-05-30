//Enter the number through the keyboard and find the number is whether positive or negative.
#include<iostream>
#include<conio.h>
 using namespace std;

 int main()
{
    int num;
    cout<<"Enter the number to check the number is positive or negative\n";
    cin>>num;

    if (num>=0)
    {
        cout<<num<<" is positive number\n";
    }
    else
    {
        cout<<num<<" is negative number\n";
    }
    return 0;
}

 