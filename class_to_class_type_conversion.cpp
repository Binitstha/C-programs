#include <iostream>
#include <conio.h>
using namespace std;
class product
{
private:
    int m;
    int n;

public:
    void setdata(int x, int y)
    {
        m = x;
        n = y;
    }
    int getm()
    {
        return m;
    }
    int getn()
    {
        return n;
    }
};
class item
{
private:
    int a;
    int b;

public:
    operator=(product p)
    {
        a = p.getm();
        b = p.getn();
    }
    void showdata()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(1, 2);
    i1 = p1;
    i1.showdata();
    return 0;
}