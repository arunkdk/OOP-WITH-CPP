/*
Write a program to convert Rectangle coordinate to Polar coordinate by using:
 conversion routine in destination class
*/

#include<math.h>
#include<iostream>
using namespace std;
class rectangle {       
    private:
    float xco, yco;
    public:
    // dubai class ma default rw parameterized constructor hunxa
    rectangle() {
        xco = 0;
        yco = 0;
    }
    rectangle(float x, float y) {
        xco = x;
        yco = y;
    }
    void showRectangular() {
        cout<<"( "<<xco<<", "<<yco<<" )"<<endl;
    }
    float getx() {
        return xco;
    }
    float gety() {
        return yco;
    }
};
class polar {
    private:
    float radius, angle;
    public:
    polar() {
        radius = 0;
        angle = 0;
    }
    polar(float r, float a) {
        radius = r;
        angle = a;
    }
    void showPolar() {
        cout<<"( "<<radius<<", "<<angle<<" )"<<endl;
    }
        polar(rectangle r) {
            float x = r.getx();
            float y = r.gety();
            radius = sqrt( (x*x) + (y*y));
            angle = atan(y / x);
    }
};
int main() { 
    rectangle r(3, 5);
    polar p;
    p = r;
    cout<<"Rectangular coordinate:"<<endl;
    r.showRectangular();
    cout<<"Polar coordinate:"<<endl;
    p.showPolar();
    return 0;
}