#include <iostream>
#include <conio.h>
using namespace std;
class time
{
private:
    float hrs;
    float mins;

public:
    time(float h, float m)
    {
        hrs = h;
        mins = m;
    }
    operator float()
    {
        float a = hrs + mins / 60;
        return a;
    }
};
int main()
{
    time t(4, 30);
    float x = float(t);
    cout << x << " hours" << endl;
    return 0;
}