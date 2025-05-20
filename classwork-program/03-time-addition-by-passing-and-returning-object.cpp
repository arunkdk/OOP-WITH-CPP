/*
WAP to demonstrate passing object as function argument as well as retrun them.
*/

#include<iostream>
using namespace std;
class Time
{
    private:
    int hr, min;
    public:
    void getTime()
    {
        cout<<"Enter hours:"<<endl;
        cin>>hr;
        cout<<"Enter minutes:"<<endl;
        cin>>min;
    }
    void displayTime()
    {
        cout<<hr<<" hours and "<<min<<" minutes."<<endl;
    }
    Time addTime( Time t1, Time t2)
    {
        Time temp;
        temp.min= t1.min + t2.min;
        temp.hr= t1.hr + t2.hr + (temp.min/60);
        temp.min= temp.min%60;
        return temp;
    }
};
int main()
{
    Time t1, t2, t3, result;
    cout<<"For time-1:"<<endl;
    t1.getTime();
    cout<<"For time-2:"<<endl;
    t2.getTime();
    result= t3.addTime(t1, t2);
    cout<<"Sum of time is:"<<endl;
    result.displayTime();
    return 0;
}
