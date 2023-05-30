//Write a programme to cheak the number wether is it perfect number or not.
#include<iostream>
#include<conio.h>
 
 using namespace  std;
 
 int main()
{
    int num,i=1,rem,sum=0;
    cout<<"Enter the number\n";
    cin>>num;
    
    for (int  i = 1; i < num; i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    
     if(sum==num)
     cout<<num<<" is perfect number\n";
     else
     cout<<num<<" is not perfect number\n";
     getch();
}