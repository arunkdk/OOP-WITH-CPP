/*
WAP to find the largest of four integers. Your program should have threee classes and each classes must have one integer
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
        cout<<"Enter first value:\n";
        cin>>x;
    }
    friend  void large( A m, B n, C o);
};
class B
{
    private:
    int y;
    public:
    void getData()
    {
        cout<<"Enter second value:\n";
        cin>>y;
    }
    friend  void large( A m, B n, C o);
};
class C
{
    private:
    int z;
    public:
    void getData()
    {
        cout<<"Enter third value:\n";
        cin>>z;
    }
    friend  void large( A m, B n, C o);
};
void large( A m, B n, C o)
{
    int a;
    cout<<"Enter fourth value:\n";
    cin>>a;
    if( a > m.x && a > n.y && a > o.z )
    {
        cout<<"Last value, "<<a<<" is greatest.";
    }
    else if( m.x > n.y && m.x > o.z )
    {
        cout<<"First value, "<<m.x<<" is greatest.";
    } 
    else if ( n.y > o.z )
    {
        cout<<"Second value, "<<n.y<<" is greatest.";
    }
    else if( a == m.x && a == n.y && a == o.z )
    {
        cout<<"All values are equal.";
    }
    else 
    {
        cout<<"Third value "<<o.z<<" is greatest.";
    }
}
int main()
{
    A m;
    B n;
    C o;
    cout<<"Enter values:\n";
    m.getData();
    n.getData();
    o.getData();
    large( m, n, o);
    return 0;
}