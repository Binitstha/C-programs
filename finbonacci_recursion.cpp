#include<iostream>
#include<conio.h>

int fibbo_num(int n);

using namespace std;
  int main()  
{
    int n,i;
    cout<<"Enter the number of terms\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<fibbo_num(i)<<endl;
    }
    getch();
} 
int fibbo_num(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibbo_num(n-1)+fibbo_num(n-2));
    }
}