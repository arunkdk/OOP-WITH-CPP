/*
Create a class called employee with data member Code, Name, address, salary. Create
a constructor to initialize the member of the class. Also create the another constructor
so that we can create an object from another object. Define member function display()
to display the information of the class.
*/

#include<iostream>
#include<string.h>
using namespace std;
class employee {
    private:
    int code;
    char name[20], address[20];
    float salary;
    public:
    employee(int c, char n[], char addr[], float s) {
        code = c;
        strcpy(name, n);
        strcpy(address, addr);
        salary = s;
    }
    employee(employee &x) {
        code = x.code;
        strcpy(name, x.name);
        strcpy(address, x.address);
        salary = x.salary;
    }
    void display() {
        cout<<"Id code:"<<code<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main() {
    int code; 
    char name[20], address[20];
    float salary;
    cout<<"Enter the employee info:\n";
    cout<<"Id code:";
    cin>>code;
    cout<<"Name:\n";
    cin>>name;
    cout<<"Address:\n";
    cin>>address;
    cout<<"Salary:\n";
    cin>>salary;
    employee e1(code, name, address, salary);
    employee e2(e1);
    cout<<"Information of object e1:\n";
    e1.display();
    cout<<"Information of object e2:\n";
    e2.display();
    return 0;
}