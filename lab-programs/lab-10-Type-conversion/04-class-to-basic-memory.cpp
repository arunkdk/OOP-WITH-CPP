/*
Write a program to convert mb, kb and byte to bytes using type
conversion. (1kb=1024bytes,1mb=1024kb)
*/

// class to basic

#include<iostream>
using namespace std;
class memory {
    private:
    int byte, kilobyte, megabyte;
    public:
    void showMemory() {
        cout<<"Megabyte: "<<megabyte<<endl;
        cout<<"Kilobyte: "<<kilobyte<<endl;
        cout<<"byte: "<<byte<<endl;
    }
    memory() {

    }
    memory(int m, int k, int b) {
        byte = b;
        kilobyte = k;
        megabyte = m;
    }
    operator long int() {
        return ( (megabyte*1024*1024) + (kilobyte*1024) + byte);
    }
};
int main() {
    int me, ki, by;
    cout<<"Enter memory in megabyte, kilobyte and byte:"<<endl;
    cin>>me>>ki>>by;
    memory M(me, ki, by);
    long int B;
    B = M;
    cout<<"Memory in megabyte, kilobyte and byte:"<<endl;
    M.showMemory();
    cout<<"Memory in bytes: "<<M;
    return 0;
}