#include<iostream>
#include<conio.h>

int fact_num(int n);

using namespace std;
int main()
{
    int fact;
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    fact=fact_num(n);
    cout<<"Fact="<<fact;
    getch();
}

int fact_num(int n)
{
    int fact=1;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return (n*(fact_num(n-1)));
    }
}

