/*
WAP to perform swapping of private data of two different classes using friend function.
*/

#include<iostream>
using namespace std;
class B;        // Forwad declaration of class
class A
{
    private:
    int x;
    public:
    void getData()
    {
        cout<<"Enter value1:";
        cin>>x;
    }
    void display()
    {
        cout<<"Value1:"<<x<<endl; 
    }
    friend void swap( A &r, B &s );             // we are passing reference
};
class B
{
    private:
    int y;
    public:
    void getData()
    {
        cout<<"Enter value2:";
        cin>>y;
    }
    void display()
    {
        cout<<"Value2:"<<y<<endl;
    }
    friend void swap( A &r, B &s );
};
void swap( A &r, B &s )
{
    int temp;
    temp=r.x;
    r.x=s.y;
    s.y=temp;
}
int main()
{
    A p;
    B q;
    cout<<"Enter values:\n";
    p.getData();
    q.getData();
    cout<<"Before swapping:\n";
    p.display();
    q.display();
    swap( p, q );
    cout<<"After swapping:\n";
    p.display();
    q.display();
    return 0;
}