/*
WAP to calculate simple interest using function with no argument and return type.
*/
#include<iostream>
using namespace std;
float simpleInterest();
int main()
{
    float result= simpleInterest();
    cout<<"The simple interest is "<<result<<endl;
    return 0;
}

float simpleInterest()
{
    float p, t, r, si;
    cout<<"Enter principal amount, time and rate:"<<endl;
    cin>>p>>t>>r;
    si=(p*t*r)/100;
    return si;
}