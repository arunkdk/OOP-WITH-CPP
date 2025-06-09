/*
Create a class Mountain with data members name, height, location, a constructor that
initializes the members to the values passed it to its parameters, a function called
CmpHeight() to compare two objects and DispInf() to display the information of
mountain. In main create two objects of the class mountain and print the information
of the mountain which is greatest height.
*/

#include<iostream>
#include<string.h>
using namespace std;
class mountain {
    private:
    char name[20], location[20];
    float height;
    public:
    mountain(char n[], int h, char l[]) {       // constructor to initialize values
    strcpy(name, n);
        height = h;
        strcpy(location, l);
    }
        void DispInf() {                // constructor to display inforamtion of mountain which has larger height
        cout<<"Name:"<<name<<endl;
        cout<<"Locatin:"<<location<<endl;
        cout<<"Height in meter:"<<height<<endl;
    }
    friend void CmpHeight(mountain m1, mountain m2);
};
void CmpHeight(mountain m1, mountain m2) {
    if(m1.height > m2.height) {
    m1.DispInf();
    }
    else {
        m2.DispInf();
    }
}
int main() {
    int h1, h2;
    char name1[20], name2[20], location1[20], location2[20];
    cout<<"Enter information for mountain one:\n";
    cout<<"Name:\n";
    cin>>name1;
    cout<<"Height in meter:\n";
    cin>>h1;
    cout<<"Location:\n";\
    cin>>location1;
    cout<<"Enter information of mountain two:\n";
    cout<<"Name:\n";
    cin>>name2;
    cout<<"Height in meter:\n";
    cin>>h2;
    cout<<"Location:\n";\
    cin>>location2;
    mountain m1(name1, h1, location1);
    mountain m2(name2, h2, location2);
    cout<<"Mountain with larger height:\n";
    CmpHeight(m1, m2);
    return 0;

}