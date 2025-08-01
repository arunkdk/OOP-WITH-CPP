/*
Create a class template to find the scalar product of vectors of integers and vectors of
floating point number
*/

#include<iostream>
using namespace std;
template<class T>
class Vector {
    private:
    T x, y, z;
    public:
    Vector (T a, T b, T c) {
        x = a;
        y = b;
        z = c;
    }
    T operator *(Vector p) {
            x = p.x * x;
            y = p.y * y;
            z = p.z * z;
            T sum = x + y + z;
            return sum;
    }
    void display() {
        cout<<x<<"i + "<<y<<"j +"<<z<<"k"<<endl;
    }
};

int main() {
    Vector<int>v1(1, 2, 3), v2(4, 5, 6);
    cout<<"v1:"<<endl;
    v1.display();
    cout<<"v2:"<<endl;
    v2.display();
    cout<<"The vector product of integer vector is: "<<v1*v2<<endl;
    Vector<float>v3(1.1f, 2.2f, 3.3f), v4(4.4f, 5.5f, 6.6f);
    cout<<"v3:"<<endl;
    v3.display();
    cout<<"v4:"<<endl;
    v4.display();
    cout<<"The scalar product of floating point vector is:"<<v3*v4<<endl;
    return 0;
}