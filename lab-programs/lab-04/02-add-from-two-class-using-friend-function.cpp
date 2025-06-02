/*
WAP to add private data of two different classes using friend function.
*/

#include<iostream>
using namespace std;
class B;
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
    friend void sum( A a, B b );   
     // here we are passing two objects to friend function as it use two data from different class
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
    friend void sum( A a, B b );   
};
void sum(  A a, B b )
{
    int r = a.x + b.y;
    cout<<"The sum of given number is "<<r<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.getData();
    b1.getData();
    sum( a1, b1 );
    return 0;
}