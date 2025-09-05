/*
Write a program that stores the object of student class. (Assume that data members
are roll, name and university_name) into a file and read values from the file and
display the data in console.
*/

#include<iostream>
#include<fstream>
using namespace std;
class Student {
    private:
    char Sname[20], Uname[20];
    int roll;
    public:
    void getData() {
        cout<<"Enter student name: "<<endl;
        cin>>Sname;
        cout<<"University name:"<<endl;
        cin>>Uname;
        cout<<"Enter student roll number:"<<endl;
        cin>>roll;
    }
    void showData() {
        cout<<"Student name:"<<Sname<<endl;
        cout<<"University name:"<<Uname<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main() {

    Student s;
    fstream file;
    file.open("student.dat", ios::in | ios::out | ios::trunc | ios::binary);
    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    cout<<"Enter student info:"<<endl;
    s.getData();
    file.write((char *)&s, sizeof(s));
    file.seekg(0);
    cout<<"Entered details are: "<<endl;
    file.read((char *)&s, sizeof(s));
    s.showData();
    file.close();
    return 0;
}