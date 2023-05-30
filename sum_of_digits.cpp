//Find the sum of digit of number
//34
//3+4
//7
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,i,rem;
    int sum=0;
    cout<<"Enter the number:\n";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;;
        num=num/10;
    }
cout<<"Sum of the digit="<<sum;
}