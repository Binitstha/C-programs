//Enter the number through the keyboard and chech the number is whethe prime or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,c;
    cout<<"Enter the number:\n";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<num<<" is prime number\n";
    }
    else
    {
        cout<<num<<" is not prime number\n";
    }
    
}