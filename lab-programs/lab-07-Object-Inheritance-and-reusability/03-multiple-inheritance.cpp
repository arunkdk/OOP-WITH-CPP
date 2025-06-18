/*
WAP to enter information of n students and then display is using the concept multiple inheritance.
*/

#include<iostream>
using namespace std;
class A {
    protected:
    int id;
    char name[20];
    public:
    void getData() {
        cout<<"Enter id and the name:"<<endl;
        cin>>id>>name;
    }
    void display() {
        cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl;
    }
};
class B {
    protected:
    int standard;
    public:
    void getData() {
        cout<<"Enter class: ";
        cin>>standard;
    }
    void display() {
        cout<<"Class: "<<standard<<endl;
    }
};
class C: public A, public B {
    protected:
    float percentage;
    public:
    void getData() {
        cout<<"Enter percentage:"<<endl;
        cin>>percentage;
    }
    void display() {
        cout<<"Percentage: "<<percentage<<endl;
    }
};
int main() {
    int n;
    C *student;
    cout<<"Enter the number of student: ";
    cin>>n;
    student = new C[n];
    cout<<"Enter information of student:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"For student-"<<i+1<<endl;
        student[i].A::getData();
        student[i].B::getData();
    }
    cout<<"Displaying the information of students:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"For student-"<<i+1<<endl;
        student[i].A::display();
        student[i].B::display();
    }
    delete[] student;
    return 0;
}