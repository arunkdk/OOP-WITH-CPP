/*
Write a program to read height of person in feet and inches and convert into meter by using
suitable type conversion method.
*/

// class to basic

#include<iostream>
using namespace std;
class height {
    private:
    int feet;
    float inches;
    public:
    void showHeight() {
        cout<<"Feet: "<<feet<<endl<<"Inches: "<<inches<<endl;
    }
    height(int f, float i) {
        feet = f;
        inches = i;
    }
    operator float() {
        float f = inches / 12;
        f = f + feet;
        return(f/3.28084);
    }
};
int main() {
    height h(3, 3.37008);
    float meter;
    meter = h;
    cout<<"Height in feet and inches:"<<endl;
    h.showHeight();
    cout<<"Height in meter: "<<meter<<endl;
    return 0;
}