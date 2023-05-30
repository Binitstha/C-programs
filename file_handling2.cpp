// C++ program to write and read values using variables.
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    char name[30];
    int age;
    fstream f;
    f.open("aaa.txt", ios::out);
    if (!f)
    {
        cout << "The file doesnot exist";
    }
    else
    {
        cout << "The file has been created\n";
        cout << "Enter your username : ";
        cin.getline(name, 30); //it will take spaces also;
        cout << "Enter your age  : ";
        cin >> age;
        f << name << endl;
        f << age << endl;
    }
    f.close();
    f.open("aaa.txt", ios::in);
    f << name;
    f << age;
    cout << "Your username and age" << endl;
    cout<<"===================="<<endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    f.close();
    return 0;
}