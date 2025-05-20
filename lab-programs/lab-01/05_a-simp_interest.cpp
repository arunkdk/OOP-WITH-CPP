/*
WAP to calculate simple interest using function with argument and return type.
*/

#include<iostream>
using namespace std;
float simpleInterest(float p, float t, float r);
int main()
{
    float a,b,c,result;
    cout<<"Enter principle amount, time and rate:"<<endl;
    cin>>a>>b>>c;
    result=simpleInterest(a,b,c);
    cout<<"The simple interest is "<<result<<endl;
    return 0;
}
float simpleInterest(float p, float t, float r)
{
    float si;
    si=(p*t*r)/100;
    return si;
    
}
