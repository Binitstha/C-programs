//Enter the data from the keyboard and print in array form.
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a[10],i,n;
    cout<<"Enter the size\n";
    cin>>n;
    cout<<"Enter the data\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The data are\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}