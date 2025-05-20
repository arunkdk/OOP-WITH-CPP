/*
Addition of two height with data members feet and inches by passing and returning object as an argument.
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
    Height addHeight( Height h1, Height h2 )
    {
        Height temp;
        temp.inch = h1.inch + h2.inch;
        temp.feet = h1.feet + h2.feet + ( temp.inch / 12 );
        temp.inch = temp.inch % 12;
        return temp;
    }
};
int main()
{
    Height h1, h2, h3,result;
    cout<<"Enter height one:\n";
    h1.getHeight();
    cout<<"Enter height two:\n";
    h2.getHeight();
    result = h3.addHeight( h1, h2 );
    cout<<"The sum of heights is:\n";
    result.display();
    return 0;
}