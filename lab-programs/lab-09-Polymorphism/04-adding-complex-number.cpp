/*
WAP to add two complex numbers. Your program should have three objects. Each
object contains two attributes (i.e. real and imaginary part) Now add each attribute
and save them into third object separately. Use the concept of ‘+’ operator
overloading.
*/

#include<iostream>
using namespace std;
class complex {
    private:
    int real, imag;
    public:
    complex() {
        real = 0;
        imag = 0;
    }  
    complex(int r, int i) {
        real = r;
        imag = i;
    }
    void display() {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    // using friend function 
    friend complex operator +(complex c1, complex c2);
};
    complex operator +(complex c1, complex c2) {
        complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }
int main() {
    complex c1(2, 3);
    complex c2(3, 2);
    complex c3;
    c3 = c1 + c2;
    cout<<"c1: "<<endl;
    c1.display();
    cout<<"c2: "<<endl;
    c2.display();
    cout<<"c3: "<<endl;
    c3.display();
    return 0;
}