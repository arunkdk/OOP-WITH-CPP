/*
Write a program to convert Rectangle coordinate to Polar coordinate by using:
 conversion routine in source class
*/

#include<math.h>
#include<iostream>
using namespace std;
// destination class first
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
};
class rectangle {     // source class paxi aauxa   
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
    operator polar() {
        float r = sqrt( (xco*xco) + (yco*yco));
        float a = atan(yco / xco);
        return polar(r, a);
    }
};
int main() {
    rectangle r(3, 5);
    polar p;
    p =r;
    cout<<"Rectangular coordinate:"<<endl;
    r.showRectangular();
    cout<<"Polar coordinate:"<<endl;
    p.showPolar();
    return 0;
}