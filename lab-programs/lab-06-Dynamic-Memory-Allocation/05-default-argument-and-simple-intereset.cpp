/*
Using class write a program that receives inputs principle amount, time and rate.
Keeping rate 8% as the default argument, calculate simple interest for three
customers.
*/

#include<iostream>
using namespace std;
class simpleInterest {
    private:
    float p, t, r;
    public:
    void getData(float principal, float time, float rate = 8) {
        p = principal;
        t = time;
        r = rate;
    }
    void display() {
        float si = (p*t*r)/100;
        cout<<"Simple Intereset: "<<si<<endl;
    }
};
int main() {
    float principal, time;
    simpleInterest c[3];
    for(int i=0; i<3; i++) {
        cout<<"For customer-"<<i+1<<endl;
        cout<<"Enter principal amount and time:"<<endl;
        cin>>principal>>time;
        c[i].getData(principal, time);
    }
    for(int i=0; i<3; i++) {
        cout<<"For customer-"<<i+1<<endl;
        c[i].display();
    }
    return 0;
}