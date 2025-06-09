/*
Write a C++ program to illustrate the use of static data member and static member functions.
*/

#include<iostream>
using namespace std;
class test {
    private:
    int code;
    static int count;
    public:
    void setCode() {
        code = ++count;
    }
    void showCode() {
        cout<<"code = "<<code<<endl;
    }
    static void showCount() {
        cout<<"count = "<<count<<endl;
    }
};
int test::count;
int main() {
    test t1, t2;
    t1.setCode();
    t2.setCode();
    test::showCount();
    test t3;
    t3.setCode();
    test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
    return 0;
}