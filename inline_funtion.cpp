// Find the sum of two number using class in inline funtion.
#include <iostream>
#include <conio.h>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y;
    cout << "Enter the first numbers : ";
    cin >> x;
    cout << "Enter the second numbers : ";
    cin >> y;
    cout << "The addition of the two number = " << add(x, y) << endl;
    getch();
}