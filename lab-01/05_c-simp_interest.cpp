/*
WAP to find simple interest using function with argument and no return type.
*/

#include<iostream>
using namespace std;
void simpleInterest(float p, float t, float r);
int main()
{
    float a,b,c,result;
    cout<<"Enter principal amount, time and rate:"<<endl;
    cin>>a>>b>>c;
    simpleInterest(a,b,c);
    return 0;
}

void simpleInterest(float p, float t, float r)
{
    float si;
    si=(p*t*r)/100;
    cout<<"The simple interest is "<<si<<endl;
}
