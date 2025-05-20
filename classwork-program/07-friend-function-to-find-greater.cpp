/*
Create a class called Rational having data members nume and deno and using friend function find which one is greater.
*/

#include<iostream>
using namespace std;
class Greater
{
    private:
    int deno, nume;
    public:
    void getData()
    {
        cout<<"Enter denominator:\n";
        cin>>deno;
        cout<<"Enter numerator:\n";
        cin>>nume;
    }
    friend void compareData(Greater c);
};
void compareData(Greater c)
{
    if(c.deno>c.nume)
    {
        cout<<"Denominator is greater.\n";
    }
    else if(c.deno==c.nume)
    {
        cout<<"Denominator and Numerator are equal.\n";
    }
    else 
    {
        cout<<"Numerator is greater.\n";
    }
}
int main()
{
    Greater c;
    cout<<"Enter values:\n";
    c.getData();
    compareData(c);
    return 0;
}
