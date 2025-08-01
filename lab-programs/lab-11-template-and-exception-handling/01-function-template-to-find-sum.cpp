/*
Create a function templates to find the sum of two integers and floats using function
template.
*/

#include<iostream>
using namespace std;
template<class T>

T sum(T x, T y) {
    T summation = x + y;
    return summation;
}

int main() {
    int i1, i2;
    float f1, f2;
    cout << "Enter any two integers:" <<endl;
    cin >> i1 >> i2;
    cout << "The sum of two integer is " << sum(i1, i2) << endl;
    cout << "Enter any two floating numbers: "<< endl;
    cin >> f1 >> f2;
    cout << "The sum of two floating numbers is " << sum(f1, f2) << endl;
    return 0;
}