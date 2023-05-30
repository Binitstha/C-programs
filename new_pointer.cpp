#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int *p1;
	float *p2;
	p1 = new int;
	p2 = new float;
	*p1 = 20;
	*p2 = 30;
	cout << "The value of p1 is : " << *p1 << endl;
	cout << "THe value of p2 is : " << *p2 << endl;
	delete p1;
	delete p2;
	return 0;
}
