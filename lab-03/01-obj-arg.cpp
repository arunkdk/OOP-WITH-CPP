/*
Write a Program to find sum of two complex number by passing object as an argument.
*/

#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    void getData()
    {
        cout<<"Enter real part:"<<endl;
        cin>>real;
        cout<<"Enter imaginary part:"<<endl;
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void addComplex( Complex c1, Complex c2 )
    {
        real = c1.real + c2.real ;
        imag = c1.imag + c2.imag ;
    }
};
int main()
{
    Complex c1, c2, c3;
    cout<<"Enter first complex number:\n";
    c1.getData();
    cout<<"Enter second complex number:\n";
    c2.getData();
    c3.addComplex( c1 , c2 );
    cout<<"Complex number after addition is ";
    c3.display();
    return 0;
}