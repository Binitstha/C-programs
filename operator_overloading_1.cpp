#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
    int price;

    void read_data()
    {
        cin>>price;
    }
    bool operator ==(demo &p)
    {
        return (price==p.price);
    }
};
int main()
{
    demo p1,p2;
    cout<<"Enter the value of p1"<<endl;
    p1.read_data();
    cout<<"Enter the value of p2"<<endl;
    p2.read_data();

    if(p1==p2) 
    {
        cout<<"P1 and P2 are equal"<<endl;
    }
    else
    {
        cout<<"P1 and P2 are not equal"<<endl;
    }
    return 0;
}