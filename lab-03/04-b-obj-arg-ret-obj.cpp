/*
Addition of two times with data members hours, minutes and seconds by passing and returning object as an argument.
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
    Time addTime( Time t1, Time t2 )    {   // This is returning function so Time is the return type
        Time temp;                          // use temp. if there was no use of . previously
        temp.sec = t1.sec + t2.sec;
        temp.min = t1.min + t2.min + ( temp.sec / 60 );
        temp.hr = t1.hr + t2.hr + ( temp.min / 60 );
        temp.min = temp.min % 60;
        temp.sec = temp.sec % 60;
        return temp;                        // Don't forget to return temp
    }
};
int main()  {
    Time t1, t2, t3, result;    // we are using result so as to get the returned value form addTime() function
    cout<<"Enter time one:\n";
    t1.getTime();
    cout<<"Enter time second:\n";
    t2.getTime();
    result = t3.addTime( t1 , t2 );
    cout<<"The sum of both time is: \n";
    result.display();
    return 0;   
}