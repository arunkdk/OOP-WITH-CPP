/*
Write a program to input two vector coordinates from the base class named “Base”. Class
“Derived” inherits all the properties of class “Base”. Class “Derived” must contain a function
named add_vector() that add the two vectors input from the base class and finally display the
result from the function display() that is friend to the base class
*/

#include<iostream>
using namespace std;
class Base {
    protected:
    int x1, y1, z1, x2, y2, z2, x, y, z;
    public:
    void getCoordinate() {
        cout<<"Enter of coordinate of first vector: "<<endl;
        cin>>x1>>y1>>z1;
        cout<<"Enter coordinate of second vector:"<<endl;
        cin>>x2>>y2>>z2;
    }
    void showCoordinate() {
        cout<<"x1: "<<x1<<endl<<"y1: "<<y1<<endl<<"z1: "<<z1<<endl;
        cout<<"x2: "<<x2<<endl<<"y2: "<<y2<<endl<<"z2: "<<z2<<endl;
    }
    friend void display(Base d);
};
class Derived: public Base {
    public:
    void add_vector(){
        x = x1 + x2;
        y = y1 + y2;
        z = z1 + z2;
    }
    friend void display(Base d);
};
void display(Base d) {
    cout<<"x: "<<d.x<<endl<<"y: "<<d.y<<endl<<"z: "<<d.z<<endl;
}
int main() {
    Derived d;
    d.getCoordinate();
    d.add_vector();
    display(d);
    return 0;
}