/*
Write a complete program to convert the polar coordinates into rectangular
coordinates.(hint: polar-coordinates(radius, angle) and rectangular co-ordinates (x,y)
where x=r*cos(angle) and y=r*sin(angle))
*/

// class to class 

#include<math.h>
#include<iostream>
using namespace std;
class rectangle {        // destination class first
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
};
// source class paxi aauxa
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
    operator rectangle() {
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        return rectangle(x,y);
    }
};
int main() {
    polar p(10.0, 0.5);     // angle is in radian!!!
    rectangle r;
    r = p;
    cout<<"Polar coordinate:"<<endl;
    p.showPolar();
    cout<<"Rectangular coordinate:"<<endl;
    r.showRectangular();
    return 0;
}