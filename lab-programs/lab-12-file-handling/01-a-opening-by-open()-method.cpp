/*
Write a program to input Book_name, Publication and price. Now store these
information in a file named “Library.dat” and display it.
[Hint: use  open( ) method to open  files]
*/

#include<fstream>
#include<iostream>
using namespace std;
class book {
    private:
    char bookName[20], publication[20];
    float price;
    public:
    void getData() {
        cout<<"Enter the name and publication of book:"<<endl;
        cin>>bookName>>publication;
        cout<<"Enter price of book:"<<endl;
        cin>>price;
    }
    void showData() {
        cout<<"Name: "<<bookName<<endl<<"Publication: "<<publication<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main() {
    book b;
    fstream file;
    file.open("Library.dat", ios::in | ios::out );
    cout<<"Enter detail about book"<<endl;
    b.getData();
    file.write((char *)&b, sizeof(b));
    file.seekg(0);
    cout<<"Detail about book:"<<endl;
    file.read((char *)&b, sizeof(b));
    b.showData();
    file.close();
    return 0;
}