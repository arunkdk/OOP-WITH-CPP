/*
WAP to add complex numbers of two different classes using friend class.
*/

#include<iostream>
using namespace std;
class two;
class one
{
    private:
    int real, imag;
    public:
    void getData()
    {
        cout<<"Enter real and imaginary part of first complex number:\n";
        cin>>real>>imag;
    }
    friend void add( one a, two b );
};
class two
{
    private:
    int real, imag;
    public:
    void getData()
    {
        cout<<"Enter real and imaginary part of second complex number:\n";
        cin>>real>>imag;
    }
    friend void add( one a, two b );
};
void add( one a, two b )
{
    int real,imag;
    real = a.real + b.real;
    imag = a.imag + b.imag;
    cout<<real<<" + "<<imag<<"i";
}
int main()
{
    one p;
    two q;
    p.getData();
    q.getData();
    add( p, q );
    cout<<" is the complex number after adding given numbers.";
    return 0;
}