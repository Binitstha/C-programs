//Enter the number through the keyboard and check 
#include<iostream>
#include<conio.h>
 using namespace std;
 int main()
 {
    int num;
    cout<<"Enter the number\n";
    cin >>num;

    if (num%2==0)
    {
        cout<<num<<" is even number"<<endl;
    }
    else
    {
        cout<<num<<" is odd number\n";

    }
    return 0;
 }