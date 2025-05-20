/*
Static data member:
A data member of class can be identified as static member when static keyword as prefix is used.
--> the value of static data member variable is initalized to zero when first object is created.
--> only one copy of this member is created for all of the objects.So all of them share a common static variable
--> this member is only visible within the class but its life time is entire program
--> it's type and the scope is defined outside the class
--> static data member can be used as a counter the records the occurences of all the objects
*/

#include<iostream>
using namespace std;
class item
{
    private:
    int number;
    static int count;   // static member variable
    public:
    void getData( int x )
    {
            number=x;
            count++;
    }
    void display()
    {
        cout<<"Count:"<<count<<endl;
    }
};
int item::count=0;      // if we don't declare any value to the static member then, zero itself is initialized
int main()
{
    item a , b , c;
    a.display();        // here count is zero
    b.display();        // here count is zero
    c.display();        // here count is zero
    a.getData( 20 );    // count++
    b.getData( 40 );    // count++
    c.getData( 60 );    // count++ final count has become three
    cout<<"Count after reading data\n";
    a.display();
    b.display();
    c.display();

}