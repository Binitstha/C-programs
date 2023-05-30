//Write a programme to cheak the number whether it is armstrong or not.
#include<iostream>
#include<conio.h>

using namespace std;
 
 int main()
  {
    int num,num1,rem,sum=0;
    cout<<"Enter the number\n";
    cin>>num;
    num1=num;
    while(num1!=0)
  {
    rem=num1%10;
    sum=sum+rem*rem*rem;
    num1=num1/10;
  }
  if(sum==num)
  cout<<num<<" is armstrong number\n";
  else
  cout<<num<<" is not armstrong number\n";
  
  getch();
  }
