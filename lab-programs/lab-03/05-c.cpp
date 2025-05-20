/*
Addition of two height with data members feet and inches, function call by one object passing second object
as function argument and return third object adding two objects
*/

#include<iostream>
using namespace std;
class Height
{
    private:
    int feet;
    int inch;
    public:
    void getHeight()
    {
        cout<<"Enter feet:";
        cin>>feet;
        cout<<"Enter inche:";
        cin>>inch;
    }
    void display()
    {
        cout<<feet<<" feet and "<<inch<<" inch\n";
    }
    Height addHeight( Height h2 )
    {
        Height temp;
        temp.inch = inch + h2.inch;
        temp.feet = feet + h2.feet + ( temp.inch / 12 );
        temp.inch = temp.inch % 12;
        return temp;
    }
};
int main()
{
    Height h1, h2, h3;
    cout<<"Enter height one:\n";
    h1.getHeight();
    cout<<"Enter height two:\n";
    h2.getHeight();
    h3 = h1.addHeight( h2 );
    cout<<"The sum of heights is:\n";
    h3.display();
    return 0;
}