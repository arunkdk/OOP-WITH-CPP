/*
Write a program to create a structure in C++ named Hospital giving details about the patient admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
Also add Date of Birth to implement the concept of nested structure.
*/

#include<iostream>
using namespace std;
struct dob
{
    int dd;
    int mm;
    int yy;
};
struct  Hospital
{
    char name[20];
    int age;
    char gender[10];
    char illness[30];
    struct dob d;
};
int main()
{
    Hospital p;
    cout<<"Enter the information about patient:"<<endl;
    cout<<"Name:";
    cin.getline(p.name,20);
    cout<<"Enter date of birth:\n";
    cout<<"Day:";
    cin>>p.d.dd;
    cout<<"Month:";
    cin>>p.d.mm;
    cout<<"Year:";
    cin>>p.d.yy;
    cout<<"Age:";
    cin>>p.age;
    cin.ignore();           //ignores the leftover characters in the input buffer.
    cout<<"Gender:";
    cin.getline(p.gender,10);
    cout<<"Nature of illness:";
    cin.getline(p.illness,30);
    cout<<"Details of patient:"<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"DOB:"<<p.d.yy<<"/"<<p.d.mm<<"/"<<p.d.dd<<endl;
    cout<<"Age:"<<p.age<<endl;
    cout<<"Gender:"<<p.gender<<endl;
    cout<<"Nature of illness:"<<p.illness;
    return 0;
}