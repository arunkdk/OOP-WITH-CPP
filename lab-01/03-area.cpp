/*
Write a Program to input radius of circle and find its area.
*/

#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    float r,area;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    area=PI*r*r;
    cout<<"The area of circle is "<<area<<endl;
    return 0;

}