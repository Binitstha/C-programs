#include <iostream>
#include <conio.h>
using namespace std;
class time
{
private:
    int h;
    int m;

public:
    time(int hrs, int mins)
    {
        h = hrs;
        m = mins;
    }
    time(int a)
    {
        h = a / 60;
        m = a % 60;
    }
    void display()
    {
        cout << h << "Hours " << m << "mins" << endl;
    }
};
int main()
{
    int x = 95;
    time t = x;
    t.display();
    return 0;
}