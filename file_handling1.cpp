#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("file.txt",ios::in);
    if(!new_file)
    {
        cout<<"The file doesnot exist\n";
    }
    else
    {
        char x;
        while(1)
        {
            new_file>>x;
            if(new_file.eof())
            break;
            cout<<x;
        }
        new_file.close();
    }
    return 0;
}