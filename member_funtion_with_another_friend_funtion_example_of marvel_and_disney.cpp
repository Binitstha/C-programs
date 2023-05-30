#include<iostream>
#include<conio.h>
using namespace std;

class marvel;
class disney
{
    public:
    void strongest_chraracter(marvel &s);
};
class marvel
{
    private:
    int thor;
    int superman;
    public:
    marvel()
    {
        thor=10;
        superman=20;
    }
    friend void disney::strongest_chraracter(marvel &s);
};
void disney::strongest_chraracter(marvel &s)
{
    cout<<"Marks that Thor has got in marvel exam : "<<s.thor<<endl;
    cout<<"Marks that Superman has got in disney exam : "<<s.superman<<endl;
}
int main()
{
    marvel st1;
    disney st2;
    st2.strongest_chraracter(st1);
    return 0;
}