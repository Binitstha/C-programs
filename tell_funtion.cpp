#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int pos;
    fstream f;
    f.open("ram.txt", ios::out);
    if (!f)
    {
        cout << "The file doesnot exist" << endl;
    }
    else
    {
        cout << "File has been created :)"<<endl;
        f << "Hello world\n";
        pos = f.tellp();
        cout << pos << endl;
        f.close();
    }
    f.open("ram.txt", ios::in);
    {
        char ch;
        int pos;
        while (!f.eof())
        {
            f >> ch;
            pos = f.tellg();
            cout << pos << endl;
            f.close();
        }
    }
    return 0;
}