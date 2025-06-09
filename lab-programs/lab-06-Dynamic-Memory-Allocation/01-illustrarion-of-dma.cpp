/*
Write a program to illustrate the dynamic memory allocation.
*/

#include<iostream>
using namespace std;
int main() {
    int i, size;
    int *ptr;                   // declaring pointer
    cout<<"Enter the size of array:\n";
    cin>>size;
    ptr = new int[size];        // allocating memory, new word is used for this
    cout<<"Enter "<<size<<" elements:\n";
    for(i=0; i<size; i++) {
        cin>>ptr[i];            // ptr[i] is also equivalent to *(ptr + i)
    }
    cout<<"Entered elements are:\n";
    for(i=0; i<size; i++) {
        cout<<*(ptr +i)<<"\t";  //ptr[i] eq to *(ptr +i) and both can be used in cin and cout
    }
    delete[] ptr;               // de-allocating the memory, delete word is used
    return 0;
}