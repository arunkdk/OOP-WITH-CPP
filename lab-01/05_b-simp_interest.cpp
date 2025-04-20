/*
WAP to calculate simple interest using function with no argument and no return type.
*/

#include<iostream>
using namespace std;
void simpleInterest();
int main()
{
    simpleInterest();
    return 0;
}

void simpleInterest()
{
    float p,t,r,si;
    cout<<"Enter principal amount, time and rate:"<<endl;
    cin>>p>>t>>r;
    si=(p*t*r)/100;
    cout<<"The simple interest is "<<si<<endl;
}