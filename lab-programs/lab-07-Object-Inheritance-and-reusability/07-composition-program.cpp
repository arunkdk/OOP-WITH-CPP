/*
Write a program for composition in a class.
*/

#include<iostream>
using namespace std;

class Employee
{
    int eid;
    float salary;
public:
    void getdata()
    {
        cout << "Enter id and salary of employee" << endl;
        cin >> eid >> salary;
    }
    void display()
    {
        cout << "Emp ID:" << eid << endl;
        cout << "Salary:" << salary << endl;
    }
};

class Company
{
    char cname[20];
    char department[20];
    Employee e;         // object as data member
public:
    void getdata()
    {
        e.getdata();            // accessing getData of employee
        cout << "Enter company name and Department:" << endl;
        cin >> cname >> department;
    }
    void display()
    {
        e.display();                // accessing the display of employee
        cout << "Company name:" << cname << endl;
        cout << "Department:" << department << endl;
    }
};

int main()
{
    Company c;
    c.getdata();
    c.display();
    return 0;
}
