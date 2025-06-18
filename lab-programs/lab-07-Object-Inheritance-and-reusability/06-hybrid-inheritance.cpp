/*
Implement the below given in class diagram in C++.Assume necessary function
yourself.

Student 
  Name
  Roll

Test
  Math
  Eng

Result
  Total

Sport
  Score

Here Result is dervied from Test and Test is derived from Student class. Also Result 
is derived from Sport class.
*/

#include<iostream>
using namespace std;
class Student {
    protected:
    int roll;
    char name[20];
    public:
    void getName() {
        cout<<"Enter roll number and name:"<<endl;
        cin>>roll>>name;
    }
    void showName() {
        cout<<"Roll number: "<<roll<<endl<<"Name: "<<name<<endl;
    }
};
class Test: public Student {
    protected:
    int math, eng;
    public:
    void getMarks() {
        cout<<"Enter marks of Mathematics and English:"<<endl;
        cin>>math>>eng;
    }
    void showMarks() {
        cout<<"Mathematics: "<<math<<endl<<"English: "<<eng<<endl;
    }
};
class Sport {
    protected:
    int score;
    public:
    void getScore() {
        cout<<"Enter score: "<<endl;
        cin>>score;
    }
    void showScore() {
        cout<<"Score: "<<score<<endl;
    }
};
class Result: public Test, public Sport {
    private:
    int total;
    public:
    void calculate() {
        total = math + eng;
    }
    void showResult() {
        cout<<"Total marks: "<<total<<endl;
    }
};
int main() {
    Result r;
    cout<<"Enter information:"<<endl;
    r.getName();
    r.getMarks();
    r.getScore();
    r.calculate();
    cout<<"Displaying information: "<<endl;
    r.showName();
    r.showMarks();
    r.showScore();
    r.showResult();
    return 0;
}