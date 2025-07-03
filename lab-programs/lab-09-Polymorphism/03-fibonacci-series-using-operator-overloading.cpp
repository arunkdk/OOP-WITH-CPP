/*
Write a program to generate Fibonacci series using operator overloading of ++
operator.
*/

#include<iostream>
using namespace std;
class fibo {
    private:
    int a, b, c;
    public:
    fibo() {   
        /*even though fibonacci series starts from 0 we are assigning -1 to a and
         1 to b as we are printing c, not a and b*/
        a = -1;
        b = 1;
        c = a + b;
    }
    void show() {
        cout<<c<<"\t";
    }
    void operator ++(){
        a = b;
        b = c;
        c = a + b;
    }
};
int main() {
    fibo f;
    int n;
    cout<<"Enter the number of terms in fibonacci series:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++) {
        f.show();
        ++f;
    }
    return 0;
}