//sum of array member in c++
#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
    int a[100],sum=0,n,i;
    float avg;
    cout<<"Enter the size of matrix:\n";
    cin>>n;

    cout<<"Enter the member of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    avg=sum/n;
    cout<<"The sum of matrix member="<<sum<<endl;
    cout<<"Average="<<avg<<endl;
    getch();

 }