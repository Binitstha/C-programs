#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
private:
    int num;
    char ch;

public:
    demo &set_num(int num)
    {
        this->num = num;
        return *this;
    }
    demo &set_char(char ch)
    {
        this->ch = ch;
        return *this;
    }
    display()
    {
        cout << "The num is : " << num << endl;
        cout << "The char is : " << ch << endl;
    }
};
int main()
{
    demo d;
    d.set_num(10).set_char('A');
    d.display();
    return 0;
}