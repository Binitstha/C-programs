#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("file.txt",ios::out);
    if(!new_file)
    {
        cout<<"File doesnot exist\n";
    }
    else{
        cout<<"The file is created\n";
        new_file<<"I am learnig c++\n";
        new_file.close();
    }
    return 0;
}