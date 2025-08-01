/*
WAP to perform sum and product of two integer and two floating point data using class
template.
*/

#include<iostream>
using namespace std;
template<class T>
class sumProduct {
    private:
    T a, b;
    public:
    sumProduct(T x, T y) {
        a = x; 
        b = y;
    } 
    void calucuate() {
        cout << " The sum is " << a+b << endl;
        cout << "The product is " << a*b << endl;
    }
};

int main() {
    sumProduct<int>sp1(2, 3);
    sumProduct<float>sp2(1.1, 2.2);
    cout<< "For integer:" << endl;
    sp1.calucuate();
    cout<< "For floating numbers:" << endl;
    sp2.calucuate();
    return 0;
}