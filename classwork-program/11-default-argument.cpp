/*
Default argument:
This concept allows us to pass predefined argument value from function declaration.

WAP to illustrate the concept of default argument.
*/

#include<iostream>
using namespace std;
int add( int a=1, int b=2, int c=3 );
int main()
{
    int x=5, y=10, z=15;
    cout<<"Sum:"<<add( x, y, z )<<endl;
    cout<<"Sum:"<<add( x, y )<<endl;
    cout<<"Sum:"<<add ( x )<<endl;
    cout<<"sum:"<<add();
    return 0;
}
int add( int a, int b, int c )
{
    int r;
    r=a+b+c;
    return r;
}