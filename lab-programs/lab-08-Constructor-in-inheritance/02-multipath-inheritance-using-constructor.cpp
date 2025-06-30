/*
The following figure shows the minimum information required for each class. Write a
program to realize the above program with necessary member functions to create the database
and retrieve individual information .Every class should contain at least one constructor and
should be inherited to other classes as well.
*/

#include<iostream>
#include<string.h>
using namespace std;
class college {
    private:
    char Cname[20], location[20];
    public:
    void showCollege() {
        cout<<"College Name: "<<Cname<<endl<<"College location: "<<location<<endl;
    }
    college(char cname[], char l[]) {
        strcpy(Cname, cname);
        strcpy(location, l);
    }
};
class student: virtual public college {
    private:
    char Sname[20];
    int roll;
    public:
    void showStudent() {
        cout<<"Student name: "<<Sname<<endl<<"Code: "<<roll<<endl;
    }
    student(char cname[], char l[],char sname[], int r): college(cname, l) {
        strcpy(Sname, sname);
        roll = r;
    }
};
class teacher: virtual public college {
    private:
    char Tname[20];
    int Tcode;
    public:
    void showTeacher() {
        cout<<"Teacher's name: "<<Tname<<endl<<"Code: "<<Tcode<<endl;
    }
    teacher(char cname[], char l[], char tname[], int tcode): college(cname, l) {
        strcpy(Tname, tname);
        Tcode = tcode;
    }
};
class books: public student, public teacher {
    private:
    char bookName[20], writerName[20];
    int Bcode;
    public:
    void showBooks() {
        cout<<"Book name: "<<bookName<<endl<<"Writer's name: "<<writerName<<endl<<"Book code: "<<Bcode<<endl;
    }
    books(char sname[], int r, char tname[], int tcode, char cname[], char l[],  char bname[], char wname[],  int bcode): student(cname, l, sname, r), teacher(cname, l, tname, tcode), college(cname, l){
        strcpy(bookName, bname);
        strcpy(writerName, wname);
        Bcode = bcode;
    }
};
int main() {
    books b("Arun", 8, "Pradip", 1, "Everest", "Sanepa", "c++", "Balagurusamy", 18);
    b.showCollege();
    b.showTeacher();
    b.showStudent();
    b.showBooks();
    return 0;
}