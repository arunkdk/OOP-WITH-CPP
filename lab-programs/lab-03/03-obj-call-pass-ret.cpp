/*
Write a program to find sum of two complex number, function call by one object passing second object
as function argument and return third object adding two objects. Hint: c3=c1.addComplex(c2);
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
    Complex addComplex( Complex c2 )
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;                // Don't forget to return temp
    }
};
int main()
{
    Complex c1, c2, c3;
    cout<<"Enter first complex number:\n";
    c1.getData();
    cout<<"Enter second complex number:\n";
    c2.getData();
    c3 = c1.addComplex( c2 );
    cout<<"The sum of complex number is ";
    c3.display();
    return 0;
}