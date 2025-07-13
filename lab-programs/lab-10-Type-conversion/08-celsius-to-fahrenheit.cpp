/*
Write a program to convert degree Celsius to degree Fahrenheit by using class to class type
conversion.
*/

// we are using conversion routine in source class

#include<iostream>
using namespace std;
class fahrenheit {
    private:
    float f;
    public:
    fahrenheit() {
        f = 0;
    }
    fahrenheit(float x) {
        f = x;
    }
    void showFahrenheit() {
        cout<<"Fahrenheit: "<<f<<endl;
    }
};
class celsius {
    private:
    float c;
    public:
    celsius() {
        c = 0;
    }
    celsius(float y) {
        c = y;
    }
    void showCelsius() {
        cout<<"Celsius: "<<c<<endl;
    }
    operator fahrenheit() {
        float f = (1.8 * c) + 32;
        return fahrenheit(f);
    }
};
int main() {
    celsius c1(100);
    fahrenheit f1;
    f1 = c1;
    cout<<"Temperature in Celsius: "<<endl;
    c1.showCelsius();
    cout<<"Temperature in Fahreheit:"<<endl;
    f1.showFahrenheit();
    return 0;
}