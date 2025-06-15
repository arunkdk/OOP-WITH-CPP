/*
WAP in C++ to calculate simple interest from given principal, time and rate. Set the
rate to 15 % as default argument when rate is not provided and also implement the
concept of dynamic initialization of object.
*/

#include<iostream>
using namespace std;
class simpleInterest {
    private:
    float p, t, r;
    public:
    simpleInterest(float principal, float time, float rate = 15) {
        p = principal;
        t = time;
        r = rate;
    }
    void display() {
        float si = (p * t * r)/100;
        cout<<"Simple Interest: "<<si<<endl;
    }
};
int main() {
    float principal, time, rate;
    char choice;
    cout<<"Enter principal amount and time:\n";
    cin>>principal>>time;
    cout<<"Do you want to give rate for simple interest(y/n):\n";
    cin>>choice;
    if(choice == 'y' || choice == 'Y') {
        cout<<"Enter rate:";
        cin>>rate;
        simpleInterest s(principal, time, rate);
        s.display();
    }
    else {
        simpleInterest s(principal, time);
        s.display();
    }
    return 0;
}