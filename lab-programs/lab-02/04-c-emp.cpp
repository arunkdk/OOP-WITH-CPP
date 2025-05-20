/*
WAP to create a class called employee with three object and  following members,
Data member
    Emp_id
    Name 
    Address
    Salary
    Department
Member function
    Initialize()
    Display()

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
        cout<<"Name:";
        cin.getline( name, 20);
        cout<<"Address:";
        cin.getline( address, 30);
        cout<<"Salary:";
        cin>>salary;
        cin.ignore();
        cout<<"Department:";
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
    Employee e1,e2,e3;
    cout<<"Enter the info of employee:\n";
    e1.Initialize();
    e2.Initialize();
    e3.Initialize();
    cout<<"\nDisplaying the info of employee:\n";
    e1.display();
    e2.display();
    e3.display();
    return 0;
}