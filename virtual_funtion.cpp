// virtual base class and virtual funtion
#include <iostream>
#include <conio.h>
using namespace std;

class gpd
{
protected:
    int gpd;

public:
    void getgpd()
    {
        cout << "Enter the data of gpd" << endl;
        cin >> gpd;
    }
};
class p1 : virtual public gpd
{
protected:
    int p1;

public:
    void getp1()
    {
        cout << "Enter the data of p1" << endl;
        cin >> p1;
    }
};
class p2 : virtual public gpd
{
protected:
    int p2;

public:
    void getp2()
    {
        cout << "Enter the data of p2" << endl;
        cin >> p2;
    }
};

class child : public p1, public p2
{
private:
    int child;
    int sum;

public:
    void getchild()
    {
        cout << "Enter the data of child class" << endl;
        cin >> child;
    }
    void add()
    {
        sum = gpd + p1 + p2 + child;
    }
    void show()
    {
        cout << "The sum of given data is = " << sum << endl;
    }
};
int main()
{
    child c;
    c.getgpd();
    c.getp1();
    c.getp2();
    c.getchild();
    c.add();
    c.show();
}
