#include<iostream>
#include<conio.h>
using namespace std;

class base;
class derive
{
    void member_funtion(base &obj);
};
class base
{
    private:
    int x;
    protected:
    int y;
    public:
    base()
    {
        x=10;
        y=20;
    }
    friend void derive::member_funtion(base &obj);
};
void derive::member_funtion(base &obj)
{
    cout<<"this is private data : "<<obj.x<<endl;
    cout<<"This is protected data : "<<obj.y<<endl;
}
int main()
{
    base object1;
    derive object2;
    object2.member_funtion(object1);
    return 0;
}
