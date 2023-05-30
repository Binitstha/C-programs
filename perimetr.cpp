// Find the perimeter,area,volume of a circle in c++ program.
#include<iostream>
#include<conio.h>
#define pi 3.14 
 using namespace std;
  int main()
    {
        float r,perimeter,area,volume;
        cout<<"Enter the radius of circle\n";
        cin >> r;

        perimeter=2*pi*r;
        area=pi*r*r;
        volume=(4*pi*r*r*r)/3;

        cout<<2<<"*pi*r=" <<perimeter<<endl;
        cout<<"pi*r*r="<<area<<endl;
        cout<<"4/3*pi*r*r*r"<<"="<<volume<<endl;

        return 0;

    }