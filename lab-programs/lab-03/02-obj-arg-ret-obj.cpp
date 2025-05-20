/*
Write a Program to find sum of two complex number by passing and returning object as an argument.
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
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Ener imaginary part:";
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    // note that here name of function is the name of class and this function returns value
    Complex addComplex( Complex c1 , Complex c2 )   
    {
        Complex temp;       // Also a new returnin variable is declared here
        temp.real = c1.real + c2.real;  // we are adding temp. something where . wasn't used before
        temp.imag = c1.imag + c2.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3, result;     // We need three objects to add and display the sum of two obhects
    cout<<"Enter first complex number:\n";
    c1.getData();
    cout<<"Enter second complex number:\n";
    c2.getData();
    result = c3.addComplex( c1 , c2 );
    cout<<"The sum of given complex numbers is ";
    result.display();
    return 0;
}