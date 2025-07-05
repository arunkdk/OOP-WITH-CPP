/*
Write a Program to overload multiplication operator(*) showing the multiplication of
two objects.
*/

#include<iostream>
using namespace std;
class space {
    private:
    int a;
    public:
    void getData() {
        cout<<"a:"<<endl;
        cin>>a;
    }
    void display() {
        cout<<a<<endl;
    }
    friend space operator *(space x, space y);
};
space operator *(space x, space y) {
    space temp;
    temp.a = x.a * y.a;
    return temp;
}
int main() {
    space s1, s2, s3;
    cout<<"Enter value for first object:"<<endl;
    s1.getData();
    cout<<"Enter value for second object:"<<endl;
    s2.getData();
    s3 = s1 * s2;
    cout<<"Value of first and second object:"<<endl;
    s1.display();
    s2.display();
    cout<<"After multiplication:"<<endl;
    s3.display();
    return 0;
}