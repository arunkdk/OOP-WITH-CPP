/*
Write a Program to add two complex number using the concept of Constructor
overloading.
*/

#include<iostream>
using namespace std;
class complex {
    private:
    int real, imag;
    public:
    complex() {         // This is default constructor and execute whenever first object is created
        cout<<"Enter real and imaginary part of first complex no.:\n";
        cin>>real>>imag;
    }
    complex(int r, int i) {     // This is parameterized constructor
        real = r;
        imag = i;
    }
    void addComplex(complex p, complex q) {
        real = p.real + q.real;
        imag = p.imag + q.imag;
    }
    void display() {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main() {
    complex c1;
    int real, imag;
    cout<<"Enter real and imaginary part of second complex no.:\n";
    cin>>real>>imag;
    complex c2(real, imag);
    complex c3(0, 0);         //  Parameterized constructor is called for it with zero and zero as argument
    c3.addComplex(c1, c2);
    cout<<"Complex number after addition:\n";
    c3.display();
    return 0;
}