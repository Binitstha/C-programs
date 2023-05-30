// Write a program to write and display values using variables with class
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class id
{
    private:
    char name[40];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter your username : ";
        cin.getline(name,40);
        cout<<"Enter the age : ";
        cin>>age;
    }
    void display()
    {
        cout<<"========================="<<endl;;
        cout<<"The User name and age are"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    id s;
    fstream f;
    f.open("acb.txt",ios::out);
    if(!f)
    {
        cout<<"The file doesnot exist :("<<endl;
    }
    else
    {
        cout<<"The file has been created :)"<<endl;
        s.getdata();
        f.write((char*)&s,sizeof(s));
        f.close();
    }
    f.open("acb.txt",ios::in);
    f.read((char* )&s,sizeof(s));
    s.display();
    f.close();
    return 0;
}