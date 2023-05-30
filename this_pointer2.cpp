#include<iostream>
#include<conio.h>

using namespace std;

class demo
{
    private:
    int num;
    char ch;
    public:
    void set_data(int num, char ch)
    {
        this->num=num;
        this->ch=ch;
    }
    void display()
    {
        cout<<"Num : "<<num<<endl;
        cout<<"Char : "<<ch<<endl;
    }
};
int main()
{
    demo d;
    d.set_data(10 ,'A');
    d.display();
    return 0;
}