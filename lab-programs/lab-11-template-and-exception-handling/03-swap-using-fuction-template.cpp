/*
Create a function template to swap two values
*/

#include<iostream>
using namespace std;
template<class T>
 
void swapping(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int i1 = 1, i2 =2;
    float f1 = 1.1, f2 = 2.2;
    char c1 = 'a', c2 = 'b';
    cout << "Before swapping: " << endl;
    cout << "i1: " << i1 << " " << "i2: " << i2 << endl;
    cout << "f1: " << f1 << " " << "f2: " << f2 << endl;
    cout << "c1: " << c1 << " " << "c2: " << c2 << endl;
    swapping(i1, i2);
    swapping(f1, f2);
    swapping(c1, c2);
    cout << "After swapping:" << endl;
    cout << "i1: " << i1 << " " << "i2: " << i2 << endl;
    cout << "f1: " << f1 << " " << "f2: " << f2 << endl;
    cout << "c1: " << c1 << " " << "c2: " << c2 << endl;
    return 0;


}