/*
.We have a class name Complex which have data member real and imaginary.
Default and parametrized constructor are there to initialize data member. Write a
program to overloading unary operator ‘++’ where real and imaginary data member
will be incremented and ‘+’ operator to add two complex number.
*/

#include<iostream>
using namespace std;
class Complex
{
int real, imag;
public:
Complex()
{
real=0;
imag=0;
}
Complex(int r, int i)
{
real=r;
imag=i;
}
Complex operator++()
{
real++;
imag++;
return *this;
}
Complex operator +(Complex c2)
{
Complex temp;
temp.real = real + c2.real;
temp.imag = imag + c2.imag;
return temp;
}
void display()
{
cout << real << "+" << imag <<"i"<<endl;
}
};
int main()
{
Complex c1(10, 5);
Complex c2(2, 4);
Complex c3;
++c1;
++c2;
c3= c1 + c2;
c3.display();
return 0;
}