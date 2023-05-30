#include <iostream>
#include <conio.h>

using namespace std;

class sample
{
private:
    int a;
    int b;

public:
    void set_data()
    {
        cout << "Enter a and b\n";
        cin >> a >> b;
    }
    void display()
    {
        cout << a << " and " << b << endl;
    }
} s;

int main()
{
    s.set_data();
    s.display();
}