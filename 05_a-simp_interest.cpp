/*
WAP to calculate simple interest using function with argument and return type.
*/

#include<iostream>
using namespace std;
float SI(float p, float t, float r);
int main()
{
    float a,b,c,result;
    cout<<"Enter principle amount, time and rate:"<<endl;
    cin>>a>>b>>c;
    result=SI(a,b,c);
    cout<<"The simple interest is "<<result<<endl;
    return 0;
}
