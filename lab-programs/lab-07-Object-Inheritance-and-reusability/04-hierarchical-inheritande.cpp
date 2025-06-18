/*
Develop a complete program for an institution which wishes to maintain a database of its
staff. Declare a base class Staff which include staff_id and name.Now develop a records
for the following staffs with the given information below.
Lecturer(subject,department)
Administrative staff (Post,department)
*/

// This illustrates the hierarchical inheritance
#include<iostream>
using namespace std;
class staff {
    protected:          // if data members are private then can't be accessed from derived class
    int id;
    char name[20];
    public:
    void getData() {
        cout<<"Enter id and name of the staff:"<<endl;
        cin>>id>>name;
    }
    void display() {
        cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl;
    }
};
class lecturer: public staff {
    private:
    char sub[20], department[20];
    public:
    void getData() {
        cout<<"Enter subject and department of lecturer: "<<endl;
        cin>>sub>>department;
    }
    void display() {
        cout<<"Subject: "<<sub<<endl<<"Department: "<<department<<endl;
    }
};
class adminStaff: public staff {
    private:
    char post[20], department[20];
    public:
    void getData() {
        cout<<"Enter post and department of administrative staff: "<<endl;
        cin>>post>>department;
    }
    void display() {
        cout<<"Post: "<<post<<endl<<"Department: "<<department<<endl;
    }
};
int main() {
    lecturer l;
    adminStaff s;
    cout<<"Enter the information:"<<endl;
    l.staff::getData();  // scope resoulition operator not only colon
    l.lecturer::getData();
    s.staff::getData();
    s.adminStaff::getData();
    cout<<"Information about lecturer:"<<endl;
    l.staff::display();
    l.lecturer::display();
    cout<<"Information about administratve staff:"<<endl;
    s.staff::display();
    s.adminStaff::display();
    return 0;
}
