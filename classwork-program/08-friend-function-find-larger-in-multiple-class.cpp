/*
Create a class called class1 and class2 with each of having one private member. Add member function to set a value { say setValue() } on each class. Add one more funtcion max(), that is friendly to both classes. max() function should compare two private member of two classes and show maximum among them. Create 1-1 object of each class and then set a value on them. Dislay the maximum number among them.
*/

#include<iostream>
using namespace std;
class class2;
class class1
{
    private:
    float x;
    public:
    void setValue()
    {
        cout<<"Enter first value:\n";
        cin>>x;
    }
    friend void max( class1 m, class2 n );
};
class class2
{
    private:
    float y;
    public:
    void setValue()
    {
        cout<<"Enter second value:\n";
        cin>>y;
    }
    friend void max( class1 m, class2 n );
};
void  max( class1 m, class2 n )
{
    if( m.x > n.y )
    {
        cout<<"First value, "<<m.x<<" is greater.";
    }
    else if ( m.x < n.y )
    {
        cout<<"Second value, "<<n.y<<" is greater.";
    }
    else
    {
        cout<<"Both values are equal.";
    }
}
int main()
{
    class1 m;
    class2 n;
    cout<<"Enter values:\n";
    m.setValue();
    n.setValue();
    max( m, n );
    return 0;
}