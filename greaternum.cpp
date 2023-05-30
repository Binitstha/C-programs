//Find the greater number among three number given by user
#include<iostream>
#include<conio.h>
  using namespace std;
  int main()
   {
      int a,b,c;
      cout<<"Enter the three numbers\n";
      cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" is greater number\n";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<" is greater number\n";
    }
    else
    {
        cout<<c<<" is greater number\n";
    }
    return 0;
   }
  