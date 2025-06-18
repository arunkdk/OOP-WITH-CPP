/*
Create a class student with two data members represent name and age. Use appropriate
member function to read and print these data members name and roll. Derive a class
marks from student that has additional data member sessional1, sessional2 to store
sessional marks. Derive another class result from marks and add the sessional marks. Use
appropriate member function to read and display data in the class.
*/

// This shows multilevel inheritance

#include<iostream>
using namespace std;
class student {
  protected:
  int roll;
  char name[20];
  public:
  void getId() {
    cout<<"Enter roll number and name of student:"<<endl;
    cin>>roll>>name;
  }
  void display() {
    cout<<"Roll number: "<<roll<<endl<<"Name: "<<name<<endl;
  }
};
class marks: public student {
    protected:
    int sessional1, sessional2;
    public:
    void getmarks() {
        cout<<"Enter sessional marks of two consecutive session:"<<endl;
        cin>>sessional1>>sessional2;
    }
    void showmarks() {
        cout<<"First sessional marks: "<<sessional1<<endl;
        cout<<"Second sessional marks: "<<sessional2<<endl;
    }
};
class result: public marks {
    private:
    int totalMarks;
    public:
    void calculate() {
        totalMarks = sessional1 + sessional2;
    }
    void showTotal() {
        cout<<"Sum of two sessional marks: "<<totalMarks<<endl;
    }
};
int main() {
    result r;
    r.getId();
    r.getmarks();
    r.calculate();
    cout<<"Information about student:"<<endl;
    r.display();
    r.showmarks();
    r.showTotal();
    return 0;
}