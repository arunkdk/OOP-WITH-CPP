/*
Write a program to implement vector addition using operator overloading, using member function.
*/

# include<iostream>
using namespace std;
class vector {
    private:
    int x, y, z;
    public:
    void getData() {
        cout<<"Enter value of x, y and z:"<<endl;
        cin>>x>>y>>z;
    }
    void showData() {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
    }
    vector operator +(vector v2) { 
    vector temp;
    temp.x = x + v2.x;
    temp.y = y + v2.y;
    temp.z = z + v2.z;
    return temp;
} 
};
int main() {
    vector v1, v2, v3;
    cout<<"Enter data for first vector:"<<endl;
    v1.getData();
    cout<<"Enter data for second vector:"<<endl;
    v2.getData();
    v3 = v1 + v2;
    cout<<"First vector:"<<endl;
    v1.showData();
    cout<<"Second vector:"<<endl;
    v2.showData();
    cout<<"Vector after additon:"<<endl;
    v3.showData();
    return 0;
}