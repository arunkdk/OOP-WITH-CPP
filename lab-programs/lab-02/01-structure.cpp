/*
Write a program to create a structure in C++ named Hospital giving details about the patient admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
*/

#include<iostream>
using namespace std;
struct  Hospital
{
    char name[20];
    int age;
    char gender[10];
    char illness[30];
};
int main()
{
    Hospital p;
    cout<<"Enter the information about patient:"<<endl;
    cout<<"Name:";
    cin.getline(p.name,20);
    cout<<"Age:";
    cin>>p.age;
    cin.ignore();           //ignores the leftover characters in the input buffer.
    cout<<"Gender:";
    cin.getline(p.gender,10);
    cout<<"Nature of illness:";
    cin.getline(p.illness,30);
    cin.get();        // Waits for Enter key before closing the terminal
    cout<<"Details of patient:"<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"Age:"<<p.age<<endl;
    cout<<"Gender:"<<p.gender<<endl;
    cout<<"Nature of illness:"<<p.illness;
    return 0;
}