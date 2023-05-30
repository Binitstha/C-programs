#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int pos;
    fstream f;
    f.open("hari.txt", ios::out);
    f.write("This is example", 5);
    pos = f.tellp();
    cout << "Current postion=" << pos << endl;
    f.seekp(pos -8);
    f.close();

    f.open("hari.txt", ios::in);
    cout<<f.tellg()<<endl;
    f.seekg(22, ios::beg);
    pos = f.tellg();
    cout << pos;
    char A[22];
    f.read(A, 14);
    cout << A << endl;
    f.close();
    return 0;
}
