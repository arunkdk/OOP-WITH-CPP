/*
Write a complete program with reference to given below.
*/

#include<iostream>
using namespace std;
class alpha {
    private:
    int a;
    public:
    void showa() {
        cout<<"a: "<<a<<endl;
    }
    alpha(int x) {
        a = x;
    }
};
class beta: public alpha {
    private:
    int b;
    public:
    void showb() {
        cout<<"b: "<<b<<endl;
    }
    beta(int x, int y): alpha(x) {
        b = y;
    }
};
int main() {
    beta b(1,2);
    b.showa();
    b.showb();
    return 0;
}