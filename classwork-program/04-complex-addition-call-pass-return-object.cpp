/*
WAP to perform addition of two objects of complex number with data member real and imag and a function call by one object passing second object as function  argument and returning to third object  by adding two object.
*/

#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, imag;
    public:
    void getComplex()
    {
        cout<<"Enter real part:\n";
        cin>>real;
        cout<<"Enter imaginary part:\n";
        cin>>imag;
    }
    void showComplex()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    Complex addComplex(Complex c2)
    {
        Complex temp;
        temp.real= real + c2.real;
        temp.imag= imag  + c2.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    cout<<"For complex-1:"<<endl;
    c1.getComplex();
    cout<<"For complex-2:"<<endl;
    c2.getComplex();
    c3=c1.addComplex(c2);
    cout<<"Displaying number:"<<endl;
    c3.showComplex();
    return 0;
}