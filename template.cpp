// WAP in c++ to create a simple calculator using class template
#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class calculator
{
private:
    T num1;
    T num2;

public:
    calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void display()
    {
        cout << "The number : " << num1 << " " << num2 << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << sub() << endl;
        cout << num1 << " * " << num2 << " = " << mul() << endl;
        cout << num1 << " / " << num2 << " = " << div() << endl;
    }
    T add()
    {
        return (num1 + num2);
    }
    T sub()
    {
        return (num1 - num2);
    }
    T mul()
    {
        return (num1 * num2);
    }
    T div()
    {
        return (num1 / num2);
    }
};
int main()
{
    int x, y;
    cout << "Enter the int number : ";
    cin >> x >> y;
    calculator<int> a(x, y);
    a.display();
    calculator<float> b(2.3, 4.3);
    b.display();
    return 0;
}