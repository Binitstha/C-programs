#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    void getdata()
    {
        cout<<"Enter the data :"<<endl;
        cin>>real;
        cin>>imag;
    }
    complex operator +(complex &a)
    {
        complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return (temp);
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3,result;
    c1.getdata();
    c2.getdata();
    c3.getdata();
    result=c1+c2+c3;
    result.display();
    return 0;
}