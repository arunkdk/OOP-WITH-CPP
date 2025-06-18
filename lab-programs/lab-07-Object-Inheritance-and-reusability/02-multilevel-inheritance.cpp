/*
WAP to enter information of n students and then display is using the concept multi-level inheritance.
*/

#include<iostream>
using namespace std;
class A {
    protected:
    int rollNo;
    char name[20];
    public:
    void getData() {
        cout<<"Enter roll number:"<<endl;
        cin>>rollNo;
        cout<<"Enter name:"<<endl;
        cin>>name;
    }
    void display() {
        cout<<"Roll number: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class B: public A {
    private:
    int mark[5];
    public:
    void getData() {
        cout<<"Enter marks of five subjects:"<<endl;
        for(int i=0; i<5; i++) {
            cin>>mark[i];
        }
    }
    void display() {
        int average = (mark[0] + mark[1] + mark[2] + mark[3] + mark[4])/5;
        cout<<"The average of five marks is "<<average<<endl;
    }
};
int main() {
    int n;
    B *b;       // pointer of B type
    cout<<"Enter the numbers of students:";
    cin>>n;
    b = new B[n];
    for(int i=0; i<n; i++) {
        cout<<"For student-"<<i+1<<endl;
        b[i].A::getData();
        b[i].B::getData();
    }
    cout<<"Displaying the information of students:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"For student-"<<i+1<<endl;
        b[i].A::display();
        b[i].B::display(); 
        // if we don't use the scope resolution operator then function of derived class is executed
    }
    delete[] b;
    return 0;
}