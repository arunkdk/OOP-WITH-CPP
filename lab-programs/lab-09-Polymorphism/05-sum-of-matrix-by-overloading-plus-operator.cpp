/*
Write a Program to find sum of two 3 X 3 matrix by overloading binary operator +.
*/

#include<iostream>
using namespace std;
class matrix {
    private:
    int arr[3][3];
    public:
    void getData() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0 ; j < 3; j++) {
                cin>>arr[i][j];
            }
        }
    }
    void display() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    friend matrix operator +(matrix a1, matrix a2);
};
matrix operator +(matrix a1, matrix a2) {
    matrix temp;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            temp.arr[i][j] = a1.arr[i][j] + a2.arr[i][j];
        }
    }
    return temp;
}
int main() {
    matrix a1, a2, a3;
    cout<<"Enter elements of first matrix:"<<endl;
    a1.getData();
    cout<<"Enter elements of second matrix:"<<endl;
    a2.getData();
    a3 = a1 + a2;
    cout<<"First matrix:"<<endl;
    a1.display();
    cout<<"Second matrix:"<<endl;
    a2.display();
    cout<<"Sum of two matrix is:"<<endl;
    a3.display();
    return 0;
}