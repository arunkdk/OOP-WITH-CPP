/*
Addition of two times with data members hours, minutes and seconds by passing object as an argument.
*/

#include<iostream>
using namespace std;
class Time  {
    private:
    int hr;
    int min;
    int sec;
    public:
    void getTime()  {
        cout<<"Enter hours, minutes and seconds:"<<endl;
        cin>>hr>>min>>sec;
    }
    void display()  {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void addTime( Time t1, Time t2 )    {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + ( sec / 60 );
        hr = t1.hr + t2.hr + ( min / 60 );
        min = min % 60;
        sec = sec % 60;
    }
};
int main()  {
    Time t1, t2, t3;
    cout<<"Enter time one:\n";
    t1.getTime();
    cout<<"Enter time second:\n";
    t2.getTime();
    t3.addTime( t1 , t2 );
    cout<<"The sum of both time is: \n";
    t3.display();
    return 0;
}