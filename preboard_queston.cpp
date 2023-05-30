#include <iostream>
#include <conio.h>

using namespace std;

class teacher
{
public:
    int tid;
    char *subject;

    void read_data()
    {
        cout << "Enter the teacher id : ";
        cin >> tid;
        cout << "Enter the subject : ";
        cin >> subject;
    }
    void display_data()
    {
        cout << "The teacher id is : " << tid << endl;
        cout << "The subject is : " << subject << endl;
    }
};
class staff
{
public:
    int sid;
    char *position;
    void read_data1()
    {
        cout << "Enter the staff id : ";
        cin >> sid;
        cout << "Enter the position : ";
        cin >> position;
    }
    void display_data1()
    {
        cout << "The Staff id is : " << sid << endl;
        cout << "The Position is : " << position << endl;
    }
};
class coordinator : public teacher, public staff
{
public:
    char *department;
    void read_data2()
    {
        cout << "Enter the department : ";
        cin >> department;
        read_data();
        // read_data1();
    }
    void display_data2()
    {
        cout << "The department is : " << department << endl;
        display_data();
        display_data1();
    }
};
int main()
{
    coordinator c;
    c.read_data2();
    c.display_data2();
    return 0;
}