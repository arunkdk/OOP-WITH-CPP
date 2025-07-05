/*
Create a base class student. Use the class to store name, dob, rollno and includes the
member function getdata(),discount().Derive two classes PG and UG from student. make
dispresult() as virtual function in the derived class to suit the requirement.
*/

#include<iostream>
using namespace std;
class Student
{
protected:
char name[20],dob[10];
int roll;
float dis,fees;
public:
void getdata()
{
cout<<"Enter the name and roll.no of student"<<endl;
cin>>name>>roll;
cout<<"Enter the date of birth format in yy-mm-dd"<<endl;
cin>>dob;
cout<<"Enter the fees"<<endl;
cin>>fees;
}
void discount()
{
cout<<"Enter discount given to student"<<endl;
cin>>dis;
}
virtual void dispresult()//Empty virtual function
{}
};
class UG:public Student
{
private:
float paidamount;
public:
void dispresult()
{
paidamount=fees-dis;
cout<<"Name:"<<name<<endl;
cout<<"Roll no:"<<roll<<endl;
cout<<"Date of Birth:"<<dob<<endl;
cout<<"Discount:"<<dis<<endl;
cout<<"Fees:"<<fees<<endl;
cout<<"Fees to be paid="<<paidamount<<endl;
}
};
class PG:public Student
{
private:
float paidamount;
public:
void dispresult()
{
paidamount=fees-dis;
cout<<"Name:"<<name<<endl;
cout<<"Roll no:"<<roll<<endl;
cout<<"Date of Birth:"<<dob<<endl;
cout<<"Discount:"<<dis<<endl;
cout<<"Fees:"<<fees<<endl;
cout<<"Fees to be paid="<<paidamount<<endl;
}
};
int main()
{
Student *st1,*st2;
PG p;
UG u;
st1=&p;
st2=&u;
cout<<"Enter PG student details:"<<endl;
st1->getdata();
st1->discount();
cout<<"Enter UG student details:"<<endl;
st2->getdata();
st2->discount();
cout<<"Details of PG student:"<<endl;
st1->dispresult();
cout<<"Details of UG student:"<<endl;
st2->dispresult();
return 0;
}