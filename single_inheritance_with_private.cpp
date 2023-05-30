// single inheritance using private
#include <iostream>
#include <conio.h>

using namespace std;

class student
{
private:
    char *name;
    int age;

public:
    void get_name()
    {
        cout << "Enter the name :" << endl;
        cin >> name;
    }
    void get_age()
    {
        cout << "Enter the age: " << endl;
        cin >> age;
    }
    void display1()
    {
        cout << "The name is : " << name << endl;
        cout << "The age is : " << age << endl;
    }
};
class new_student : public student
{
private:
    int roll_number;

public:
    void get_roll_number()
    {
        cout << "Enter the roll number: " << endl;
        cin >> roll_number;
    }
    void display2()
    {
        cout << "The roll number is :" << roll_number << endl;
    }
};

int main()
{
    new_student s;
    s.get_name();
    s.get_age();
    s.get_roll_number();
    s.display1();
    s.display2();
    getch();
    return 0;
}
