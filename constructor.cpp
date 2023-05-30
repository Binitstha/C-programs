#include<iostream>
using namespace std;
class wall
{
  private:
    double length;
    double breadth;
  public:
  wall(double len, double br)
 {
   length=len;
   breadth=br;
 }
wall(wall &obj)
{
    length=obj.length;
    breadth=obj.breadth;
}
double cal_area()
{
    return(length*breadth);
}
};
int main()
{
    wall wall1(10.5,12.5);
    wall wall2=wall1;
    cout<<"area of the first wall: "<<wall1.cal_area()<<endl;
    cout<<"area of the second wall: "<<wall2.cal_area()<<endl;
    return 0;
}


