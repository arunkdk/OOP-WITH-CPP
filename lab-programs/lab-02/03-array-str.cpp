/*
Write a program to create a structure in C++ named Hospital giving details about the patient admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
Also add Date of Birth to implement the concept of nested structure and do so for 50 patients using array of structureq.
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
    Hospital p[50];
    cout<<"Enter the information about patient:"<<endl;
    for(int i=0; i<50; i++)
    {
        cout<<"Details of patient["<<i+1<<"]:\n";
        cout<<"Name:";
        cin.getline(p[i].name,20);
        cout<<"Enter date of birth:\n";
        cout<<"Day:";
        cin>>p[i].d.dd;
        cout<<"Month:";
        cin>>p[i].d.mm;
        cout<<"Year:";
        cin>>p[i].d.yy;
        cout<<"Age:";
        cin>>p[i].age;
        cin.ignore();           //ignores the leftover characters in the input buffer.
        cout<<"Gender:";
        cin.getline(p[i].gender,10);
        cout<<"Nature of illness:";
        cin.getline(p[i].illness,30);
    }
    cout<<"\nDetails of patient:"<<endl;
    for(int i=0; i<50; i++)
    {
        cout<<"Patient["<<i+1<<"]:\n";
        cout<<"Name:"<<p[i].name<<endl;
        cout<<"DOB:"<<p[i].d.yy<<"/"<<p[i].d.mm<<"/"<<p[i].d.dd<<endl;
        cout<<"Age:"<<p[i].age<<endl;
        cout<<"Gender:"<<p[i].gender<<endl;
        cout<<"Nature of illness:"<<p[i].illness;
    }
    return 0;
}