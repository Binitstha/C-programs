#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    private:
    int feet;
    int inch;
    public:
    demo(int f,int i)
    {
        feet=f;
        inch=i;
    }
    friend ostream &operator<<(ostream &out, demo &d)
    {
        out<<d.feet<<"feet "<<d.inch<<"inch"<<endl;
        return out;
    }
    friend istream &operator>>(istream &in, demo &d)
    {
        in>>d.feet>>d.inch;
        return in;
    }
};
int main()
{
    demo d1(4,2);
    cout<<d1;
    return 0;
}