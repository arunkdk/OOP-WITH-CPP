/*
WAP to show that how inheritance supports reusability.
*/

#include<iostream>
using namespace std;
class A {
    protected:      // private data member of base class can't be accessible from derived class
    int x, y;
    public:
    void getData() {
        cout<<"Enter the value of x and y:"<<endl;
        cin>>x>>y;
    }
    void display() {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    }
};
class B: public A {
    private:
    int sum;
    public:
    void calculate() {
        sum = x  + y;
    }
    void display() {
        cout<<"Sum: "<<sum<<endl;
    }
};
int main() {
    B b;            // object of derived class allocates memory for also data member of base class
    b.getData();    // which also means we can access the data member of base class with suitable derivation
    b.A::display(); // and  visibility mode
    b.calculate();
    b.B::display();
    return 0;
}