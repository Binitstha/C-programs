//Find the factorial of entered number through the keyboard
#include<iostream>
#include<conio.h>
 
 using namespace std;
  int main()
  {
    int num,fact=1;
     
     cout<<"Enter the number\n";
     cin>>num;

     for(int i=1;i<=num;i++)
     {
        fact=fact*i;
     }
     cout<<"fact"<<"="<<fact<<endl;
  }