// Write a program according to the specification given below:

// Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// – Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class account
{
    private:
    int acc_no;
    int balance;
    static int min_balance;
    public:
    void getdata()
    {
        cout<<"Enter your account no:"<<endl;
        cin>>acc_no;
        cout<<"Enter balance: "<<endl;
        cin>>balance;
    }
    static void getdata1()
    {
        cout<<"Enter min_balance : "<<endl;
        cin>>min_balance;
    }
    void display()
    {
        cout<<"Account no : "<<acc_no<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    static void display1()
    {
        cout<<"MIn_balance : "<<min_balance<<endl;
    }
};
int account::min_balance = 0;
int main()
{
    int i = 0;
    account a[5],b;
    b.getdata1();
    cout << "\n=======Enter Account Data=======" << endl;
    for(i = 0; i < 5; i++){
        a[5].getdata();
    }
    cout << "\n=======Account Details=======\n" << endl;
    for(i = 0; i < 5; i++){
        a[5].display();
        a[5].display1();
    }
    return 0;
}