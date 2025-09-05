/*
Write a program to input Book_name, Publication and price. Now store these
information in a file named “Library.dat” and display it.
[Hint: use constructor to open( ) files]
*/

// we are using constructor method to open file.

#include<iostream>
#include<fstream>
using namespace std;
int main() {

    // writing to the file
    ofstream outfile("Library.dat");
    char Book_name[20];
    cout<<"Enter book name:"<<endl;
    cin>>Book_name;
    outfile<<Book_name<<endl;
    char Publication[20];
    cout<<"Enter publication of book: "<<endl;
    cin>>Publication;
    outfile<<Publication<<endl;
    float Price;
    cout<<"Enter price of book:"<<endl;
    cin>>Price;
    outfile<<Price<<endl;
    outfile.close();

    // reading from file
    ifstream infile("Library,dat");
    infile>>Book_name;
    infile>>Publication;
    infile>>Price;
    cout<<"Name of book: "<<Book_name<<endl;
    cout<<"Publication: "<<Publication<<endl;
    cout<<"Price: "<<Price<<endl;
    infile.close();
    
    
    return 0;
}
