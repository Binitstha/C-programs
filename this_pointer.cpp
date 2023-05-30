#include<conio.h>
#include<iostream>

using namespace std;

class demo
{
    private:
    int data;
    public:
    void method(int a)
    {
        this->data=a;
    }
    void print()
    {
        cout<<"The data is : "<<data<<endl;
    }
};
int main()
{
    demo b;
    b.method(10);
    b.print();
    return 0;
}