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
And member function should be defined within the class.
*/

#include<iostream>
using namespace std;
class Employee
{
    private:        // If nothing is declared, then member function is private.
    int emp_id;
    char name[20];
    char address[30];
    float salary;
    char department[30];
    public:
    void Initialize()
    {
        cout<<"Employee id:";
        cin>>emp_id;
        cin.ignore();
        cout<<"\nName:";
        cin.getline( name, 20);
        cout<<"\nAddress:";
        cin.getline( address, 30);
        cout<<"\nSalary:";
        cin>>salary;
        cin.ignore();
        cout<<"\nDepartment:";
        cin.getline( department, 30);
    }
    void display()
    {
        cout<<"Employee id:"<<emp_id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Department:"<<department<<endl;
    } 
};
int main()
{
    Employee e;
    cout<<"Enter the info of employee:\n";
    e.Initialize();
    cout<<"Displaying the info of employee:\n";
    e.display();
    return 0;
}