#include<iostream>
#include<conio.h>
using namespace std;

class one_piece
{
    public:
    void zoro()
    {
        cout<<"Three showrd style"<<endl;
    }
};
class anime: public one_piece
{
    public:
    void zoro()
    {
        cout<<"I am gonna be hokage someday"<<endl;
    }
};
int main()
{
    anime a;
    a.zoro();
    a.one_piece::zoro();
    return 0;
}