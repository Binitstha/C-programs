#include <iostream>
#include <conio.h>
using namespace std;

class sample
{
private:
    int a;
    int b;

public:
    void set_data();
    void display();
} s;

void sample::set_data()
{
    cout << "Enter a and b\n";
    cin >> a >> b;
}
void sample::display()
{
    cout << a << " and " << b << endl;
}

int main()
{
    s.set_data();
    s.display();
}
