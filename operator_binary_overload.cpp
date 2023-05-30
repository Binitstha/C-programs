// WAP in c++ to overload binary+ operator
#include <iostream>
#include <conio.h>

using namespace std;
class complex
{
    int x;
    int y;

public:
        void input()
        {
            cout << "Enter x and y" << endl;
            cin>>x>>y;
        }
        complex operator+(complex &obj)
        {
            complex temp;
            temp.x = x + obj.y;
            temp.y = y + obj.x;
            return temp;
        }
        void print()
        {
            cout << x << "+" << y << endl;
        }
};
int main()
{
    complex c1, c2, sum;
    c1.input();
    c2.input();
    sum = c1 + c2;
    sum.print();
    return 0;
}