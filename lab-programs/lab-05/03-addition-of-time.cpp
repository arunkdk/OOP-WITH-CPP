/*
Create a class time constructor having hour, minute and second as an arguments is
use to take two time data from user. The add function that takes two class objects an
arguments add them respectively then display the aggregate result?
(Apply 60 second =1 minutes and 60 minutes =1 hour)
*/

#include<iostream>
using namespace std;
class Time {
    private:
    int hr, min, sec;
    public:
    Time(int h, int m, int s) {
        hr = h; 
        min = m;
        sec = s;
    }
    Time() {

    }
    void addTime(Time t1, Time t2) {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min +(sec / 60 );
        hr = t1.hr + t2.hr + (min / 60);
        min = min % 60;
        sec = sec % 60;
    }
    void display() {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main() {
    int hr1, min1, sec1, hr2, min2, sec2;
    cout<<"Enter first hour, minutes and second:\n";
    cin>>hr1>>min1>>sec1;
    cout<<"Enter second hour, minutes and second:\n";
    cin>>hr2>>min2>>sec2;
    Time t1(hr1, min1, sec1);       // calls parameterized constructor
    Time t2(hr2, min2, sec2);       // calls parameterized constructor
    Time t3;            // it calls defalut consturctor
    t1.display();
    t2.display();
    t3.addTime(t1, t2);
    t3.display();
    return 0;
}