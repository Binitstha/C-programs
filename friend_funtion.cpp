#include <iostream>
#include <conio.h>
using namespace std;

class A
{
private:
    int x;

protected:
    int y;

public:
    A()
    {
        cout<<"Enter the x"<<endl;
        cin>>x;
        cout<<"Enter the y"<<endl;
        cin>>y;
    }
    friend void print(A &a);
};

void print(A &a)
{
    cout << "This is private : " << a.x << endl;
    cout << "This is protected : " << a.y << endl;
}
int main()
{
    A a1;
    print(a1);
    return 0;
}