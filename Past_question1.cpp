// Write a program according to the specification given below:

// – Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// – Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object
#include <iostream>
#include <conio.h>
using namespace std;
class account
{
public:
    int acc_no;
    int balance;
    static int min_balance;

    void read_data()
    {
        cout << "Enter the acc no. : ";
        cin >> acc_no;
        cout << "Enter the balance : ";
        cin >> balance;
        cout<<"/n";
    }
    void display_data()
    {
        cout << "The account no. : " << acc_no << endl;
        cout << "The balance is : " << balance << endl;
    }
    static void get_minbalance()
    {
        cout << "Enter the minimum balance : " << endl;
        cin >> min_balance;
    }
    static void display_minbalance()
    {
        cout << "Min balance : " << min_balance << endl;
    }
};
int account::min_balance = 0;
int main()
{
    account acc[5];
    account::get_minbalance();
    cout << "=========Enter account detail=========" << endl;
    for (int i = 0; i < 5; i++)
    {
        acc[i].read_data();
    }
    cout << "=========Account detail=========" << endl;
    for (int i = 0; i < 5; i++)
    {
        acc[i].display_data();
        acc[i].display_minbalance();
    }
    return 0;
}