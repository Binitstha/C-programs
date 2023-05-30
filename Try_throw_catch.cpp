#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw runtime_error("Division by zero not possible!");
        }
    }
    catch (char *ex)
    {
        cout << ex << endl;
    }
    return 0;
}