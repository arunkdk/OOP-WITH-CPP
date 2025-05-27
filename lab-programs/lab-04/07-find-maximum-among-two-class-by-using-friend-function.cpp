/*
Create classes called class1 and class2 with each of having one private member. Add member function to set 
a value(say setvalue()) one each class. Add one more function max() that is friendly to both classes. max()
 function should compare two private member of two classes and show maximum among them. Create one-one object
  of each class and then set a value on them. Display the maximum number among them.
*/

#include<iostream>
using namespace std;
class two;
class one
{
    private:
    int x;
    public:
    void setData()
    {
        cout<<"Enter first value:";
        cin>>x;
    }
    friend void compare( one a, two b );
};
class two
{
    private:
    int y;
    public:
    void setData()
    {
        cout<<"Enter second value:";
        cin>>y;
    }
    friend void compare( one a, two b );
};
void compare( one a, two b )
{
    if( a.x > b.y )
    {
        cout<<"First value: "<<a.x<<" is maximum.";
    }
    else if ( a.x < b.y )
    {
        cout<<"Second value: "<<b.y<<" is maximum.";
    }
    else 
    {
        cout<<"Both are equal.";
    }
}
int main()
{
    one p;
    two q;
    p.setData();
    q.setData();
    compare( p, q );
    return 0;
}