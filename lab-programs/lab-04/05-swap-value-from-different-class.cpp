/*
WAP to swap the contents of two variables of 2 different classes using friend function.
*/

#include<iostream>
using namespace std;
class two;
class one
{
    private:
    int x;
    public:
    void getData()
    {
        cout<<"Enter first value:";
        cin>>x;
    }
    void display()
    {
        cout<<"x:"<<x<<endl;
    }
    friend void swap( one &a, two &b );
};
class two
{
        private:
    int y;
    public:
    void getData()
    {
        cout<<"Enter first value:";
        cin>>y;
    }
    void display()
    {
        cout<<"y:"<<y<<endl;
    }
    friend void swap( one &a, two &b );
};
void swap( one &a, two &b )
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
}
int main()
{
    one p;
    two q;
    p.getData();
    q.getData();
    cout<<"Values before swapping:\n";
    p.display();
    q.display();
    swap( p, q );
    cout<<"Values after swapping:\n";
    p.display();
    q.display();
    return 0;
}