/*
WAP to find the roots of quadratic equation using function template
*/

#include<iostream>
#include<math.h>
using namespace std;
template<class T>

void findRoot(T a, T b, T c) {
    T d = b*b - 4*a*c;
    if(d <0) {
        cout << "Roots are imaginary" << endl;
    }
    else if(d == 0) {
        cout << "Roots are real and equal" << endl;
        cout<< "And root is " << (-b/2.0*a) << endl;
    }
    else {
        cout << "Roots are real and unequal" << endl;
        T r1 = (-b-sqrt(d))/2.0*a;
        T r2 = (-b+sqrt(d))/2.0*a; //integer only division gives integer, so to give possible float root writing 2.0
        cout << "R1: " << r1 << endl << "R2: " << r2 << endl;
    }
}

int main() {
    int a1, b1, c1;
    float a2, b2, c2;
    cout << "Enter the integer coefficients: " << endl;
    cin >> a1 >> b1 >> c1;
    findRoot(a1, b1, c1);
    cout << "Enter the floating coefficients: " << endl;
    cin >> a2 >> b2 >> c2;
    findRoot(a2, b2, c2);
    return 0;
}