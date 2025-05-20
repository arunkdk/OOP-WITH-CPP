/*
Addition of two height with data members feet and inches by passing object as an argument
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
    void addHeight( Height h1, Height h2 )
    {
        inch = h1.inch + h2.inch;
        feet = h1.feet + h2.feet + ( inch / 12 );
        inch = inch % 12;
    }
};
int main()
{
    Height h1, h2, h3;
    cout<<"Enter height one:\n";
    h1.getHeight();
    cout<<"Enter height two:\n";
    h2.getHeight();
    h3.addHeight( h1, h2 );
    cout<<"The sum of heights is:\n";
    h3.display();
    return 0;
}