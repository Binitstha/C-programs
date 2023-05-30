#include<iostream>
using namespace std;
class box
{
    private:
      float breadth;
      float heigth;
    public:
      box(float br,float hr)
      {
      breadth=br;
      heigth=hr;
      }
    float area()  
    {
        return(breadth*heigth);
    }
    float perimeter()
    {
        return(2*breadth+2*heigth);
    }
};

int main()
{
    float x;
    float y;
    cout<<"Enter Breadth and heigth:"<<endl;
    cin>>x>>y;
    box box(x,y);
    cout<<"area of box: "<<box.area()<<endl;
    cout<<"perimeter of box: "<<box.perimeter()<<endl;
    return 0;
}
