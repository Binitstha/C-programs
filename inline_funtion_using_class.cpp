// find the sum of two number using class in inline funtion.

#include <iostream>
#include <conio.h>
using namespace std;

class add
{
public:
    inline int sum(int a, int b)
    {
        return (a + b);
    }
};
int main()
{
    add s;
    int x, y;
    cout << "Enter the first number = ";
    cin >> x;
    cout << "Enter the second number = ";
    cin >> y;
    cout << "The sum of two numbers = " << s.sum(x, y) << endl;
    return 0;
}