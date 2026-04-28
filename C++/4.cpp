//// Define a base class Shape with virtual methods area() and perimeter(). 
//Create derived classes Rectangle and Square that inherit from Shape, 
//as well as a Triangle class. Implement methods in each derived class
// to calculate the area and perimeter specific to that shape. 
// Demonstrate the hierarchy by creating objects of each shape
//  and calculating their areas and perimeters using base class
//   pointers or references to illustrate polymorphism.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length, width;
public:
    void Rect(float l, float w)
    {
        length = l;
        width = w;
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2 * (length + width);
    }
};

class Square : public Shape
{
private:
    float side;
public:
    void Squ(float s)
    {
        side = s;
    }
    float area()
    {
        return side * side;
    }
    float perimeter()
    {
        return 4 * side;
    }
};

class Triangle : public Shape
{
private:
    float base, height, r, h, u;
public:
    void upload(float bs, float hi, float s, float a, float t)
    {
        base = bs;
        height = hi;
        r = s;
        h = a;
        u = t;
    }
    float area()
    {
        return 0.5 * base * height;
    }
    float perimeter()
    {
        return r + h + u;
    }
};
int main()
{
    Shape *s;
    Rectangle r;
    Square su;
    Triangle t;
    r.Rect(10, 2);
    su.Squ(5);
    t.upload(10, 4, 9, 3, 5);
    cout<<">>Rectangle"<<endl;
    s = &r;
    cout<<"Area is "<< s->area()<< endl;
    cout<<"Perimeter is "<< s->perimeter()<< endl;
    cout<<">>Square" << endl;
    s = &su;
    cout<<"Area is " << s->area()<<endl;
    cout<<"Perimeter is "<< s->perimeter()<<endl;
    cout<<">>Triangle"<<endl;
    s = &t;
    cout<<"Area is "<< s->area()<<endl;
    cout<<"Perimeter is "<< s->perimeter()<<endl;
    return 0;
}
