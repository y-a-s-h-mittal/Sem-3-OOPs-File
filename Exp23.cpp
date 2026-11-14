#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape." << endl;
    }
    virtual ~Shape() = default;
};
class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    void area() override
    {
        const float PI = 3.14159f;
        cout << "Area of Circle: " << PI * radius * radius << endl;
    }
};
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void area() override
    {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};
int main()
{
    Circle c(5);
    Rectangle r(4, 6);
    Shape *ptr;
    ptr = &c;
    ptr->area();
    ptr = &r;
    ptr->area();
    return 0;
}