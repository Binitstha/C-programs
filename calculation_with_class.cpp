#include <iostream>
#include <conio.h>

using namespace std;

class calculation
{
private:
    int l;
    int b;

public:

    void area()
    {
        cout << "Enter l and b\n";
        cin >> l >> b;
        int A;
        A = l * b;
    }
    void display_area()
    {
        int A;
        cout << "Area=" << A << endl;
    }
     void perimeter()
    {
        cout << "Enter l and b\n";
        cin >> l >> b;
        int P;
        P = 2*(l + b);
    }
    void display_Perimeter()
    {
        int P;
        cout << "Perimeter=" << P << endl;
    }
} c;

int main()
{
    c.area();
    c.display_area();
    c.perimeter();
    c.display_Perimeter();
}