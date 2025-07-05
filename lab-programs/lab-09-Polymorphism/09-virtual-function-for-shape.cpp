/*
Create a abstract class shape with two members base and height, a member function
for initialization and a pure virtual function to compute area().Derive two specific
classes, Triangle and Rectangle which override the function area ().Use these classes
in main function and display the area of triangle and rectangle.
*/

#include<iostream>
using namespace std;
class Shape
{
protected:
float base, height;
public:
void setdimension(float x, float y)
{
base=x;
height=y;
}
virtual void area() =0;
};
class Triangle : public Shape
{
public:
void area()
{
cout<<"Area of triangle="<<(0.5*base*height)<<endl;
}
};
class Rectangle : public Shape
{
public:
void area()
{
cout<<"Area of Rectangle="<<(base*height)<<endl;
}
};
int main()
{
Shape *bptr;
Triangle t;
Rectangle r;
t.setdimension(10.0, 5.0);
r.setdimension(20.0, 10.0);
bptr= &t;
bptr->area();
bptr = &r;
bptr->area();
return 0;
}