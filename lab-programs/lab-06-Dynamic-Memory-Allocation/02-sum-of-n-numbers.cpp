/*
WAP to find the sum of n numbers entered by user using Dynamic Memory Allocation in C++.
*/

#include<iostream>
using namespace std;
int main() {
    int n, sum=0;
    int *ptr;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    ptr = new int[n];
    cout<<"Enter the numbers:\n";
    for(int i=0; i<n; i++) {
        cin>>ptr[i];
    }
    for(int i=0; i<n; i++) {
        sum = sum + ptr[i];
    }
    cout<<sum<<" is the sum of "<<n<<" natural number.";
    delete[] ptr;
    return 0;
}