/*
Write a C++ Program to find Largest among two integers, characters and float using
function template
*/

#include<iostream>
using namespace std;
template<class T>

T largest(T x, T y) {
    T large;
    if ( x > y) {
        large = x;
    }
    else {
        large = y;
    }
    return large;
}

int main() {
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout<< "Enter any two integers: "<< endl;
    cin >> i1 >> i2;
    cout << largest(i1,i2) << " is greatest among integers." << endl;
    cout << "Enter any two floating numbers:" << endl;
    cin >> f1 >> f2;
    cout << largest(f1, f2) << " is the greates among floats." << endl;
    cout<< "Enter any  two characters: " << endl; 
    cin >> c1 >> c2;
    cout << largest(c1, c2) << " is the largest amnong characters." << endl;
    return 0;
}