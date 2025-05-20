/*
Friend class:
A friend class can access the pirvate and protected memebers of other  classes in which it is defined as a friend.

WAP to demnostrate the use of friend function.
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
        cout<<"Enter first value:";
        cin>>x;
    }
    friend class B;
};
class B
{
    private:
    int y;
    public:
    void getData()
    {
        cout<<"Enter second value:";
        cin>>y;
    }
    void sum( A m )
    {
        cout<<"Sum  of first and second value is "<<y+m.x<<endl;
    }
};
int main()
{
    A p;
    B q;
    cout<<"Enter values:\n";
    p.getData();
    q.getData();
    q.sum(p);
    return 0;
}