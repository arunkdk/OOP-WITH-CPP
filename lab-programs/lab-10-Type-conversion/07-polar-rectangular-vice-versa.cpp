/*
Write a program to convert class Polar to Rectangle and vice versa by using type
conversion.
*/

#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
private:
float radius;
float angle;
public:
Polar()
{
radius=0.0;
angle=0.0;
}
Polar(float r, float a)
{
radius=r;
angle=a;
}
void display()
{
cout<<"("<<radius<<","<<angle<<")"<<endl;
}
float getr()
{
return radius;
}
float geta()
{
return angle;
}
};
class Rectangle
{
private:
float xco;
float yco;
public:
Rectangle()
{
xco=0.0;
yco=0.0;
}
Rectangle(float x,float y)
{
xco=x;
yco=y;
}
void display()
{
cout<<"("<<xco<<","<<yco<<")"<<endl;
}
operator Polar()
{
float a=atan(yco/xco);
float r=sqrt(xco*xco+yco*yco);
return Polar(r,a);
}
Rectangle(Polar p)
{
float r=p.getr();
float a=p.geta();
xco=r*cos(a);
yco=r*sin(a);
}
};
int main()
{
cout<<"Conversion from Polar to Rectangular coordinates"<<endl;
Polar p1(10.0,0.785398);
Rectangle r1;
r1=p1;
cout<<"Polar coordinates:"<<endl;
p1.display();
cout<<"Rectangular coordinates:"<<endl;
r1.display();
cout<<"Conversion from Rectagular to Polar coordinates"<<endl;
Rectangle r2(7.07107,7.07107);
Polar p2;
p2=r2;
cout<<"Rectangular coordinates:"<<endl;
r2.display();
cout<<"Polar coordinates:"<<endl;
p2.display();
return 0;
}