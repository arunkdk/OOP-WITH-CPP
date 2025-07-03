/*
Write a simple program to overload unary minus(-) operator.
*/

#include<iostream>
using namespace std;
class space {
    private:
    int x, y, z;
    public:
    void getData() {
        cout<<"Enter the values of x, y and z:"<<endl;
        cin>>x>>y>>z;
    }
    void showData() {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"z: "<<z<<endl;
    }
    void operator -() {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main() {
    space s;
    s.getData();
    cout<<"s:"<<endl;
    s.showData();
    -s;
    cout<<"-s:"<<endl;
    s.showData();
    return 0;
}