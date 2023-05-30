// Write a program to give a example of operator overloading
#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
private:
    int value;

public:
    demo()
    {
        value = 5;
    }
    void operator++()
    {
        ++value;
    }
    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    demo d;
    d.display();
    ++d;
    d.display();
    ++d;
    d.display();
    ++d;
    d.display();
    return 0;
}