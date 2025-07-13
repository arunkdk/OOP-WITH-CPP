/*
Make a class called memory with member data to represent bytes, kilobytes and
megabytes .Read the value of memory in bytes from the user as basic types and display
the result in user defined memory type. Like for m (basic type) = 108766, your program
should display as: 1 megabyte 38 kilobytes 177 bytes. [Hint: Use basic to user defined
(basic-to-class) conversion method].
*/

// basic to class

#include<iostream>
using namespace std;
class memory {
    private:
    int byte, kilobyte, megabyte;
    public:
    void showMemory() {
        cout<<"Megabytes: "<<megabyte<<endl;
        cout<<"Kilobyte: "<<kilobyte;
        cout<<endl<<"Bytes: "<<byte<<endl;
    }
    memory() {

    }
    memory(long int b) {
        int rem;
       megabyte = b / (1024 * 1024);
       rem = b % (1024 * 1024);
       kilobyte = rem / 1024;
       byte = rem % 1024;        
    } 
};
int main() {
    memory m;
    long int b;
    cout<<"Enter the number of bytes:"<<endl;
    cin>>b;
    m = b;
    m.showMemory();
    return 0;
}