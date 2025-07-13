/*
Write a program to read height of person in meter and convert into feet and inches by using
suitable type conversion method.
*/

// Basic to class

#include<iostream>
using namespace std;
class Height {
    private:
    float inches;
    int feet;
    public:
    void showHeight() {
        cout<<"Feet: "<<feet<<endl<<"Inches: "<<inches<<endl;
    }
    Height(float meter) {
        float f = meter * 3.28084;
        feet = int(f);  // type conversion to integer type
        inches = (f - feet) * 12;
    }
};
int main() {
    float meter;
    cout<<"Enter height in meter: "<<endl;
    cin>>meter;
    Height h = meter; // this calls the parmeterized constructor
    cout<<"Height of person in feet and inches:"<<endl;
    h.showHeight();
    return 0;
}