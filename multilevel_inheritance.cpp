#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    int roll;
    char *name;

public:
    void getdata()
    {
        cout << "Enter the name : " << endl;
        cin >> name;
        cout << "Enter roll number : " << endl;
        cin >> roll;
    }
    void display1()
    {
        cout << "The name is : " << name << endl;
        cout << "The roll number is : " << roll << endl;
    }
};
class marks : public student
{
    int sub1, sub2, sub3;

public:
    void getmarks()
    {
        cout << "Enter the marks of subjects : " << endl;
        cin >> sub1 >> sub2 >> sub3;
    }
    void display2()
    {
        cout << "The marks obtained in three subjects are : " << sub1 << sub2 << sub3 << endl;
    }
    int findtotal()
    {
        return (sub1 + sub2 + sub3);
    }
};
class result : public marks
{
    float total, percentage;

public: 
    void getdata1()
    {
        getdata();
        getmarks();
    }
    void displaydata()
    {
        display1();
        display2();
        total = findtotal();
        percentage = total / 100;

        cout << "Total = " << total << endl;
        cout << "percentage = " << percentage << endl;
    }
};
int main()
{
    result r;
    r.getdata1();
    r.displaydata();
    return 0;
}