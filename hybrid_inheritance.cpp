// Example of hybrid inheritance
#include <iostream>
#include <conio.h>
using namespace std;

class vehical
{
public:
    vehical()
    {
        cout << "This is vehical" << endl;
    }
};

class car : public vehical
{
public:
    car()
    {
        cout << "This is cars" << endl;
    }
};

class racing
{
public:
    racing()
    {
        cout << "This is racing" << endl;
    }
};

class ferrari : public car, public racing
{
public:
    ferrari()
    {
        cout << "This is ferrari" << endl;
    }
};

int main()
{
    ferrari f;
    ferrari s;
    return 0;
}