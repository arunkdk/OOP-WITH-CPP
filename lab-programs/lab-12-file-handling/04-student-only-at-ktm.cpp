/*
Write a C++ program to input records of n students(name, address and roll) and save
to the file. Display the record of only those student whose address is “Kathmandu”
after reading from the file.
*/

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Student {
    private:
    char name[20], address[20];
    int roll;
    public:
    void getData() {
        cout<<"Enter name, address and age:"<<endl;
        cin>>name;
        cin>>address;
        cin>>roll;
    }
    void showData() {
        if(strcmp(address, "kathmandu") == 0){
                    cout<<"Name: "<<name<<endl;
                    cout<<"Address:"<<address<<endl;
                    cout<<"ROll: "<<roll<<endl;
        }
    }
};

int main() {
    Student s[2];
    fstream file;
    file.open("student.txt", ios::in | ios::out);
    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    cout<<"Enter the details:"<<endl;
    for(int i = 0; i < 2; i++) {
        s[i].getData();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.seekg(0);
    cout<<"Entered details are:"<<endl;
    for(int i = 0; i < 2; i++) {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].showData();
    }
    file.close();
    return 0;
}