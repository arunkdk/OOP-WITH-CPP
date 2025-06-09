/*
Write a program to add two complex numbers by using dynamic constructor.
*/

#include<iostream>
using namespace std;
class complex {
    private:
    int *real, *imag;           // use declare pointer variable to use dynamic constructor
    public:
    complex() {                 // thi constructor is for third object c3 which takes the final sum
        real = new int;         // we first alloctate memory for varibale
        imag = new int;        
        *real = 0 ;
        *imag = 0;
    }
    complex(int r, int i) {
        real = new int;
        imag = new int;
        *real = r;              // we assigning value to pointer so don't forget * before variable name
        *imag = i;
    }
    ~complex() {                // don't forget to use destructor after dynamic constructor
        delete real;
        delete imag;
    }    void addComplex(complex &a, complex &b) {  //pass by reference so as not to create duplicate objcet
        *real = *a.real + *b.real;
        *imag = *a.imag + *b.imag;
    }
    void display() {
        cout<<*real<<" + "<<*imag<<"i"<<endl;
    }
};
int main() {
    int r1, r2, i1, i2;
    cout<<"Enter real and imaginary part of first complex number:\n";
    cin>>r1>>i1;
    cout<<"Enter real and imaginary part of second comlex number:\n";
    cin>>r2>>i2;
    complex c1(r1, i1);
    complex c2(r2, i2);
    complex c3;
    c3.addComplex(c1, c2);
    cout<<"Complex number after addition:\n";
    c3.display();
    return 0;
}