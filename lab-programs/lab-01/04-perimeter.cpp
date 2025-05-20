/*
Write a program to input length and breadth of a room and calculate and print its area and perimeter.
*/

#include<iostream>
using namespace std;
int main()
{
    float length, breadth, area, peri;
    cout<<"Enter length and breadth of the room:"<<endl;
    cin>>length>>breadth;
    area=length*breadth;
    peri=2*(length + breadth);
    cout<<"The area is "<<area<<" unit "<<" and perimeter is "<<peri<<" unit.";
    return 0;
}