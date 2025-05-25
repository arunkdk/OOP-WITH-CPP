/*
WAP to create a single class with private data members and add them using friend function.
*/

#include<iostream>
using namespace std;
class A
{
    private:
    int x, y;
    public:
    void getData()
    {
        cout<<"Enter the value of x and y:\n";
        cin>>x>>y;
    }
    void display()
    {
        cout<<"Entered values are "<<x<<" and "<<y<<endl;
    }
    friend void sum( A a );   
     // we pass only one object to the friend if we are using data from only one class
     // so if we have to pass data from two differnet class then we pass two arguments to friend function
};
void sum(  A a )
{
    int r = a.x + a.y;
    cout<<"The sum of given number is "<<r;
}
int main()
{
    A a1;
    a1.getData();
    a1.display();
    sum( a1 );
    return 0;
}
