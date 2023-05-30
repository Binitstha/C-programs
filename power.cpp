#include <iostream>
#include <conio.h>
using namespace std;

int power(int b, int a);
int main()
{
    int a, b;
    int result;
    cout << "Entert the base\n";
    cin >> b;
    cout << "Enter the power\n";
    cin >> a;
    result = power(b, a);
    cout << b << "^" << a << "=" << result;
    getch();
}

int power(int b, int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return (b * power(b, a - 1));
    }
}