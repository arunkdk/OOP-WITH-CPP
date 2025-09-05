/*
Write a program to illustrate reading and writing into multiple files.
*/

#include<iostream>
#include<fstream>
using namespace std;
int main() {

    ofstream fout;
    fout.open("Car");
    fout<<"Prosche"<<endl;
    fout<<"Bmw"<<endl;
    fout<<"Range  Rover"<<endl;
    fout.close();
    
    fout.open("Bike");
    fout<<"Duckatti"<<endl;
    fout<<"Bmw"<<endl;
    fout<<"xr"<<endl;
    fout.close();

    char line[50];
    ifstream fin;
    fin.open("Car");
    cout<<"Cars:"<<endl;
    while(fin) {
        fin.getline(line, 50);
        cout<<line<<endl;
    }
    fin.close();

    fin.open("Bike");
    cout<<"Bikes:"<<endl;
    while(fin) {
        fin.getline(line, 50);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}