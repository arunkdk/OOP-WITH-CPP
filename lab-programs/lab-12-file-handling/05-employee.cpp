/*
Create a class named Employee with data members: emp_id, name, position and
salary. Now, input the records of n employees and store them in a file named
“employee.dat”. After writing the data to the file, read the records from the file and
display the information of those employees whose salary is greater than 25,000.
*/

#include<iostream>
#include<fstream>
using namespace std;
class employee {
    private:
    char name[20], position[20];
    float salary;
    int id;
    public:
    void getData() {
        cout<<"Enter name of employee: "<<endl;
        cin>>name;
        cout<<"Enter id of employee:"<<endl;
        cin>>id;
        cout<<"Enter posiotion:"<<endl;
        cin>>position;
        cout<<"Enter salary"<<endl;
        cin>>salary;
    }
    void showData() {
        if(salary >2500) {
                    cout<<"Name: "<<name<<endl;
                    cout<<"ID: "<<id<<endl;
                    cout<<"Postion: "<<position<<endl;
                    cout<<"Salary: "<<salary<<endl;
        }
    }
};
int main() {
    int n;
    cout<<"Enter number of employees:"<<endl;
    cin>>n;
    employee e[n];
    fstream file;
    file.open("Student.txt", ios::in | ios::out);
    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    cout<<"Enter info of employees:"<<endl;
    for(int i = 0; i<n; i++) {
        e[i].getData();
        file.write((char *)&e[i], sizeof(e[i]));
    }
 
    file.seekg(0);
    
    cout<<"Details of employee with salary 25000"<<endl;
    for(int i = 0; i < n; i++) {
        file.read((char *)&e[i], sizeof(e[i]));
        e[i].showData();
    }
    file.close();
    return 0;
}