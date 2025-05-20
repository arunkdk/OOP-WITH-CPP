/*
WAP to illustrate friend function.
*/

#include<iostream>
using namespace std;
class Sample
{
    private:
    int a, b;
    public:
    void setData(int x, int y)
    {
        a= x;
        b= y;
    }
    void displayData()
    {
        cout<<"Value of a:"<<a<<endl<<"Value of b:"<<b<<endl;
    }
    friend void addData(Sample s);
};
void addData(Sample s)
{
    int r;
    r= s.a + s.b;
    cout<<r<<" is the sum.";
}
int main()
{
    Sample s;
    s.setData(5, 10);
    cout<<"Displaying the data:\n";
    s.displayData();
    addData(s);
    return 0;
}