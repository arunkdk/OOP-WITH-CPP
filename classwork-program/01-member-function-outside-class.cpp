/*
Create a class called employee with three data members, emp number, name and address. A function called readdata() to take the details of the employee from the user and a function called displaydata() to display the details of the employee. In main create two objects of class employee and for each object call the readdata() and displaydata() function.
*/

#include<iostream>
using namespace std;
class employee 
{
    private:
    int n;
    char name[20];
    char address[20];
    public:
    void readdata();
    void displaydata();
};
void employee::readdata()
{
    cout<<"Id:\n";
    cin>>n;
    cin.ignore();
    cout<<"Name:\n";
    cin.getline(name,20);
    cout<<"Address:\n";
    cin.getline(address,20);
}
void employee::displaydata()
{
    cout<<"Name:"<<name<<endl<<"Id:"<<n<<endl<<"Address:"<<address<<endl;
}
int main()
{
    employee e1,e2;
    cout<<"Enter information of employee-1"<<endl;
    e1.readdata();
    cout<<"Enter information of employee-2"<<endl;
    e2.readdata();
    cout<<"Displaying information of employee-1"<<endl;
    e1.displaydata();
    cout<<"Displaying information of employee-2"<<endl;
    e2.displaydata();
    return 0;
}