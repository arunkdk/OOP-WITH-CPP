/*
Create a class person with data members name, age, address and citizenship number.
Write a constructor to initialize the value of a person. Assign citizenship number if
the age of the person is greater than 16 otherwise assign zero to citizenship number.
Also create a function to display values.
*/

#include<iostream>
#include<string.h>
using namespace std;
class person {
    private:
    char name[20], address[20];
    int age, citizenshipNo;
    public:
    person(char n[], int a, char addr[], int c) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        citizenshipNo = c;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Citizenship Number:"<<citizenshipNo<<endl;
    }
};
int main() {
    char name[20], address[20];
    int age, citizenshipNo;
    cout<<"Enter Information of person:\n";
    cout<<"Name:\n";
    cin>>name;
    cout<<"Address:\n";
    cin>>address;
    cout<<"Age:\n";
    cin>>age;
    cout<<"The information of person is:\n";
    if(age >16) {
    cout<<"Citizenship Number:\n";
    cin>>citizenshipNo;
    person p1(name, age, address, citizenshipNo);
    p1.display();
    }
    else {
        person p1(name, age, address, 0);
        p1.display();
    }
    return 0;
}