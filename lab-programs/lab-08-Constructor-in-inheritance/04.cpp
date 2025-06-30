/*
Create two classes Publication and Sales. The Publication class holds title and price and the
Sales class holds the total monthly sales. Derive a class called Book from both Publication and
Sales. The book class stores author’s name and page count. Each of these three classes should
have a function Display() to print the information of classes and should have at least one
constructor that is inherited to derived class as well. Write a program to implement these classes.
*/

#include<iostream>
#include<string.h>
using namespace std;
class publication {
    float price;
    char title[20];
    public:
    void display() {
        cout<<"Price: "<<price<<endl<<"Title: "<<title<<endl;
    }
    publication(char t[], float pr) {
        strcpy(title, t);
        price = pr;
    }
};
class sales {
    private:
    float monthlySales;
    public:
    void display() {
        cout<<"Monthly sales: "<<monthlySales<<endl;
    }
    sales(float m) {
        monthlySales = m;
    }
};
class book: public publication, public sales {
    private:
    char authorName[20];
    int page;
    public:
    void display() {
        cout<<"Author's name: "<<authorName<<endl<<"Page count: "<<page<<endl;
    }
    book(char an[], int p, char t[], float pr, float ms): publication(t, pr), sales(ms) {
        strcpy(authorName, an);
        page = p;
    }
};
int main() {
    book b("Balagurusamy", 400, "C++", 399.99, 99999.99);
    b.book::display();
    b.publication::display();
    b.sales::display();
    return 0;
}