/*
Write a program to find the largest of four integers. your program should have three classes and each 
classes have one integer number
*/

#include<iostream>
using namespace std;
class B;
class C;
class A
{
    private:
    int x;
    public:
    void getData()
    {
        cout<<"Enter the value of x:\n";
        cin>>x;
    }
    void display()
    {
        cout<<"x:"<<x<<endl;
    }
    friend void compare( A a, B b, C c );   
     // here we are passing three objects to friend function as it use three data from different class
};
class B
{
    private:
    int y;
    public:
    void getData()
    {
        cout<<"Enter the value y:\n";
        cin>>y;
    }
    void display()
    {
        cout<<"y:"<<y<<endl;
    }
    friend void compare( A a, B b, C c );   
};
class C
{
    private:
    int z;
    public:
    void getData()
    {
        cout<<"Enter the value of z:\n";
        cin>>z;
    }
    void display()
    {
        cout<<"z:"<<z<<endl;
    }
    friend void compare( A a, B b, C c );    
};
void compare( A a, B b, C c )
{
   int fourth;
   cout<<"Enter last value:\n";
   cin>>fourth;
   if( a.x > b.y && a.x > c.z && a.x > fourth )
   {
    cout<<"First value is greatest: "<<a.x;
   }
   else if ( b.y > c.z && b.y > fourth )
   {
    cout<<"Second value is greatest: "<<b.y;
   }
   else if ( c.z > fourth )
   {
    cout<<"Third value is greateat: "<<c.z;
   }
   else if( fourth > c.z )
   {
    cout<<"Fourth value is greatest: "<<fourth;
   }
   else 
   {
    cout<<"All are equal";
   }

}
int main()
{
    A a1;
    B b1;
    C c1;
    a1.getData();
    b1.getData();
    c1.getData();
    a1.display();
    b1.display();
    c1.display();
    compare( a1, b1, c1 );
    return 0;
}