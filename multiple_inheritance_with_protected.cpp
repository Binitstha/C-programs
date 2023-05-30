// simple program of multiple inheritance with the access specifier protected
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
protected:
    int roll, m1, m2, m3;

public:
    void getdata()
    {
        cout << "Enter roll number : " << endl;
        cin >> roll;
        cout << "Enter marks of three subjects : " << endl;
        cin >> m1 >> m2 >> m3;
    }
};
class sports
{
protected:
    int sm;

public:
    void getdata2()
    {
        cout << "Enter sports marks : " << endl;
        cin >> sm;
    }
};

class statement : public student, public sports
{
private:
    int total; 
    float avg;

public:
    void calculation()
    {
        total = (m1 + m2 + m3);
        avg = total / 3;
        cout << "Total" << total << endl;
        cout << "avg" << avg << endl;
    }
};
int main()
{
    statement s;
    s.getdata();
    s.getdata2();
    s.calculation();
    return 0;
}