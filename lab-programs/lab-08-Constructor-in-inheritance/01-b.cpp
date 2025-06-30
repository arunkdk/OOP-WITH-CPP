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
    int b, c;
    public:
    void showb() {
        cout<<"b: "<<b<<endl<<"c: "<<c<<endl;
    }
    beta(int x, int y, int z): alpha(x) {
        b = y;
        c = z;
    }
};
class gamma: public beta {
    private:
    int d, e;
    public:
    void showg() {
        cout<<"d: "<<d<<endl<<"e: "<<e<<endl;
    }
    gamma (int x, int y, int z, int m, int n): beta(x, y, z) {
        d = m;
        e = n;
    }
};
int main() {
    gamma g(5, 4, 3, 2, 1);
    g.showa();
    g.showb();
    g.showg();
    return 0;
}