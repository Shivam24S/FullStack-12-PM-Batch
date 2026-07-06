

#include <iostream>

using namespace std;

class Shape
{

public:
    virtual void calculate() = 0;
};

class Circle : public Shape
{

public:
    float radius;

    Circle(float r)
    {
        radius = r;
    }

    void calculate() override
    {

        cout << "\n the area of the circle is " << 3.14 * radius * radius << endl;
    }
};

class Triangle : public Shape
{

public:
    float base;
    float height;

    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void calculate() override
    {

        cout << "\n the area of the triangle is " << 0.5 * base * height << endl;
    }
};

class Rectangle : public Shape
{

public:
    float length;
    float width;

    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void calculate() override
    {

        cout << "\n the area of the Rectangle is " << length * width << endl;
    }
};

int main()
{

    Shape *ptr;

    Circle c(20);

    ptr = &c;
    ptr->calculate();

    Triangle t(5, 10);

    ptr = &t;
    ptr->calculate();

    Rectangle r(15, 20);

    ptr = &r;
    ptr->calculate();

    return 0;
}