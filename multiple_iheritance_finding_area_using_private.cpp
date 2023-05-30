// Create a class rectangle and circle as a base class and shape as a derive class and find the area of a shape.
// with using private.
#include <iostream>
#include <math.h>

using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area()
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return M_PI * pow(radius, 2);
    }
};

int main()
{
    Rectangle rect(5, 10);
    Circle cir(7);

    Shape *shape1 = &rect;
    Shape *shape2 = &cir;

    cout << "Area of Rectangle: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;
    return 0;
}