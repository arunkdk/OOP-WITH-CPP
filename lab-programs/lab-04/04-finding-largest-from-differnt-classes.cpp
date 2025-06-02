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
    friend void compare( A a, B b, C c );    
};
void compare( A a, B b, C c )
{
   int fourth, largest;
   cout<<"Enter last value:\n";
   cin>>fourth;
   largest = a.x;
   if(b.y>largest)
   {
    largest = b.y;
   }
   if(c.z>largest)
   {
    largest = c.z;
   }
   if(fourth > largest)
   {
    largest = fourth;
   }
   cout<<largest<<" is the largest number among four."<<endl;

}
int main()
{
    A a1;
    B b1;
    C c1;
    cout<<"Enter distinct values:\n";
    a1.getData();
    b1.getData();
    c1.getData();
    compare( a1, b1, c1 );
    return 0;
}