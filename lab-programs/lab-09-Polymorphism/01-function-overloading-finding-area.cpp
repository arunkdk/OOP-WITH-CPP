/*
Write a program finding area of square, rectangle, triangle by using function
overloading technique.
*/

#include<iostream>
#include<math.h>
using namespace std;
class calculateArea {
    public:
    int  area(int l) {
        return (l*l);
    }
    int area(int l, int b) {
        return (l*b);
    }
    float area(int a, int b, int c) {
        float s = (a+b+c)/2;
        return(sqrt(s*(s-a)*(s-b)*(s-c)));
    }
};
int main() {
    calculateArea a1;
    cout<<"Area of square: "<<a1.area(4)<<endl;
    cout<<"Area of rectangle: "<<a1.area(4, 5)<<endl;
    cout<<"Area of triangle: "<<a1.area(3, 4, 5)<<endl;
    return 0;
}