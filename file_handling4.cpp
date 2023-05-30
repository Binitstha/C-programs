#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int n;
    int a[30];
    cout << "Enter the size of an array : " << endl;
    cin >> n;
    fstream f;
    f.open("acb.txt", ios::out);
    if (!f)
    {
        cout << "File does not exist :( ";
    }
    else
    {
        cout << "File has been created :) " << endl;
        cout << "Enter the data of an array : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        f << a;
        f.close();
    }
    f.open("acb.txt", ios::in);
    cout << "================================\n";
    cout << "The data that you have entered : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        cout << "\n";
    }
    f << a;
    f.close();
    return 0;
}