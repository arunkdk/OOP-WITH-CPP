/*
Reference variable:
It provides an alias ( alternative name ) for a previously defined variable.
*/

#include<iostream>
using namespace std;
int main()
{

    float total = 50;
    float &sum = total;      // here sum is the refernce variable
    cout<<"Total:"<<total<<endl;
    cout<<"Sum:"<<sum<<endl;
    total = total + 50;
    cout<<"Total:"<<total<<endl;
    cout<<"Sum:"<<sum<<endl;   // Changes made to the original variable also refelects to the reference variable
    sum = sum + 50;
    cout<<"Total:"<<total<<endl;    // Changes made to the reference variable also reflects to original one
    cout<<"Sum:"<<sum<<endl;
    return 0;
}