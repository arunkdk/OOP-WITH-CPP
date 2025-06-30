/*
Create a class person with data members name, age and address. Create another class
teacher with data members Qualification and department .Also create another class Student
with data members program and semester. Both class are inherited from class person. Every
class has at least one constructor which uses base class constructor. Create member function
showdata() in each to display the information of the class member.
*/

#include<iostream>
#include<string.h>
using namespace std;
class person {
    private:
    char pName[20], address[20];
    int age;
    public:
    void showdata() {
        cout<<"Person name: "<<pName<<endl<<"Address: "<<address<<endl;
    }
    person(char pn[], char addr[], int a) {
        strcpy(pName, pn);
        strcpy(address, addr);
        age = a;
    }
};
class teacher: public person {
    private:
    char qualification[20], department[20];
    public:
    void showdata() {
        cout<<"Teacher qualification: "<<qualification<<endl<<"Teacher derpartment: "<<department<<endl;
    }
    teacher(char pn[], char addr[], int a, char q[], char d[]): person(pn, addr, a) {
        strcpy(qualification, q);
        strcpy(department, d);
    }
};
class student: public person {
    private:
    char semester[20], program[20];
    public:
    void showdata() {
        cout<<"Student program: "<<program<<endl<<"Student semester: "<<semester<<endl;
    }
    student(char sem[], char pro[], char pn[], char addr[], int a): person(pn, addr, a) {
        strcpy(semester, sem);
        strcpy(program, pro);
    }
};
int main() {
    student s("First", "Computer", "Arun", "Lalitpur", 19);
    teacher t("Pradip", "Palpa", 30, "Master's", "Computer");
    cout<<"Teacher's information:"<<endl;
    t.person::showdata();
    t.teacher::showdata();
    cout<<"Student's information:"<<endl;
    s.person::showdata();
    s.student::showdata();
    return 0;
}