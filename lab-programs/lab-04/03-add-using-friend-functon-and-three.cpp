/*
WAP to add private data of three different classes using friend function.
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
    friend void sum( A a, B b, C c );   
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
    friend void sum( A a, B b, C c );   
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
    friend void sum( A a, B b, C c );   
};
void sum(  A a, B b, C c )
{
    int r = a.x + b.y + c.z;
    cout<<"The sum of given number is "<<r<<endl;
}
int main()
{
    A a1;
    B b1;
    C c1;
    a1.getData();
    b1.getData();
    c1.getData();
    sum( a1, b1, c1 );
    return 0;
}