/*
WAP to create a class called employee with following members,
Data member
    Emp_id
    Name 
    Address
    Salary
    Department
Member function
    Initialize()
    Display()
And member function should be defined outside the class.
*/

#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    char name[20];
    char address[20];
    float salary;
    char department[20];
    public:
    void Initialize();
    void Display();
};
void employee::Initialize()
{
        cout<<"Employee id:";
        cin>>id;
        cin.ignore();
        cout<<"Name:";
        cin.getline( name, 20 );
        cout<<"Address:";
        cin.getline( address, 20);
        cout<<"Salary:";
        cin>>salary;
        cin.ignore();
        cout<<"Department:";
        cin.getline( department, 20 );
}
void employee::Display()
{
    cout<<"Employee id:"<<id<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Salary:"<<salary<<endl;
    cout<<"Department:"<<department<<endl;
}
int main()
{
    employee e;
    cout<<"Enter employee information:"<<endl;
    e.Initialize();
    cout<<"\nDisplaying information:"<<endl;
    e.Display();
    return 0;
}
