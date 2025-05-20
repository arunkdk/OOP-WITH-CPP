/*
Addition of two times with data members hours, minutes and seconds, function call by one object passing second object as function argument and return third object adding two objects.
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
    Time addTime( Time t2 )    {
        /* that variable where we assign is member of that object which gets that returned value*/
        Time temp;
        temp.sec = sec + t2.sec;            // we don't write temp. to that member who's object called that
        temp.min = min + t2.min + ( temp.sec / 60 );
        temp.hr = hr + t2.hr + ( temp.min / 60 );
        temp.min = temp.min % 60;
        temp.sec = temp.sec % 60;
        return temp;
    }
};
int main()  {
    Time t1, t2, t3;
    cout<<"Enter time one:\n";
    t1.getTime();
    cout<<"Enter time second:\n";
    t2.getTime();
    t3 = t1.addTime( t2 );
    cout<<"The sum of both time is: \n";
    t3.display();
    return 0;
}