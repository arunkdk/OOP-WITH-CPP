/*
WAP to perform additon of two times by passing object as in function argument. Use three data members hours, minutes and seconds.
*/

#include<iostream>
using namespace std;
class Time
{
    private:
    int hr, min, sec;
    public:
    void getTime()
    {
        cout<<"Enter hours:"<<endl;
        cin>>hr;
        cout<<"Enter minutes:"<<endl;
        cin>>min;
        cout<<"Enter seconds:"<<endl;
        cin>>sec;
    }
    void displayTime()
    {
        cout<<hr<<" hours "<<min<<" minutes and "<<sec<<" seconds.";
    }
    void addTime(Time t1, Time t2)
    {
        sec=t1.sec + t2.sec;
        min=t1.min + t2.min + (sec/60);
        hr=t1.hr + t2.hr + (min/60);
        min=min%60;
        sec=sec%60;
    }
};
int main()
{
    Time t1, t2 , t3;
    cout<<"For time-1:"<<endl;
    t1.getTime();
    cout<<"For time-2:"<<endl;
    t2.getTime();
    t3.addTime(t1, t2);
    cout<<"Display added time:\n";
    t3.displayTime();
    return 0;

    
}