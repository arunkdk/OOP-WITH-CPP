/*
Write a simple program using of dynamic memory allocation which should include
calculation of marks of 3 subjects of n students and displaying the result as pass or fail &
name, roll. Pass mark is 45 out of 100 in each subject.
*/

#include<iostream>
using namespace std;
class student {
    private:
    int rollNo, m1, m2, m3;
    char name[20];
    public:
    void getData() {
        cout<<"Name:\n";
        cin>>name;
        cout<<"Roll number:\n";
        cin>>rollNo;
        cout<<"Marks of three subject:\n";
        cin>>m1>>m2>>m3;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<rollNo<<endl;
        if(m1 > 44 && m2 > 44 && m3 > 44) {
            cout<<"Pass\n";
        }
        else {
            cout<<"Fail\n";
        }
    }
};
int main() {
    int n;
    student *ptr;           //object as pointer
    cout<<"Enter the number of student:\n";
    cin>>n;
    ptr = new student[n];  // allocating memory for object pointer
    cout<<"Enter information of student:\n";
    for(int i=0; i<n; i++) {
        cout<<"Student-"<<i+1<<endl;
        ptr[i].getData();
    }
    cout<<"Displaying information of student:\n";
    for(int i=0; i<n; i++) {
        cout<<"Student-"<<i+1<<endl;
        ptr[i].display();
    }
    delete[] ptr;
    return 0;
}