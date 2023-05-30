#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    try
    {
        if (age <= 18)
        {
            throw runtime_error("This site is blocked for you");
        }
        else
        {
            throw(age);
        }
    }
    catch (int my_age)
    {
        cout << "Access granted!"<<endl;
        cout << my_age;
    }
    return 0;
}