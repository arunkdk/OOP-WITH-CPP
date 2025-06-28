/*
Create a class Person with data members name and age. Derive a class Employee from Person
with its data member employee_id. Derive another class Manager from Employee with its data
member department. Receive the data members from each class member function and display the
data of all classes from the class Manager.
*/

#include<iostream>
using namespace std;
class Person {
    protected:
    char name[20];
    int age;
    public:
    void getPerson() {
        cout<<"Enter name and age of person:"<<endl;
        cin>>name>>age;
    }
    void showPerson() {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
    }
};
class Employee: public Person {
    protected:
    int emp_id;
    public:
    void getEmployee() {
        cout<<"Enter employee id: "<<endl;
        cin>>emp_id;
    }
    void showEmployee() {
        cout<<"Employee id: "<<emp_id<<endl;
    }
};
class Manager: public Employee {
    private:
    char department[20];
    public:
    void getManager() {
        cout<<"Enter department of manager: "<<endl;
        cin>>department;
    }
    void showManager() {
        cout<<"Department: "<<department<<endl;
    }
};
int main() {
    Manager m;
    cout<<"Enter the information of person:"<<endl;
    m.getPerson();
    m.getEmployee();
    m.getManager();
    cout<<"Displaying the information of person: "<<endl;
    m.showPerson();
    m.showEmployee();
    m.showManager();
    return 0;
}