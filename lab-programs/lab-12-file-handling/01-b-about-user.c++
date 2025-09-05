/*
Write a program that prompts the user to enter their name and age. Write the entered
data into a file named “userinfo.txt”, read details from “userinfo.txt” and display the
data on console.
[Hint: use open() method to open files]
*/

#include<fstream>
#include<iostream>
using namespace std;
class User {
    private:
    char name[20];
    int age;
    public:
    void getData() {
        cout<<"Enter name of user:"<<endl;
        cin>>name;
        cout<<"Enter age of user:"<<endl;
        cin>>age;
    }
    void showData() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main() {
    User u;
    fstream file;
    file.open("userinfo.txt", ios::in | ios::out);
    cout<<"Enter detail of user:"<<endl;
    u.getData();
    file.write((char *)&u, sizeof(u));
    file.seekg(0);
    file.read((char *)&u, sizeof(u));
    cout<<"Information of user:"<<endl;
    u.showData();
    file.close();
    return 0;
}