/*
Write a program to concatenate two strings using the concept of containership.
*/

#include<iostream>
#include<string.h>
using namespace std;

class first
{
    char name[20];
public:
    void setn(char n[])
    {
        strcpy(name, n);
    }
    char* getn()
    {
        return (name);
    }
};

class second
{
    char address[20];
public:
    void seta(char a[])
    {
        strcpy(address, a);
    }
    char* geta()
    {
        return (address);
    }
};

class concat
{
private:
    first f;
    second s;
public:
    void getinfo(char n[], char a[])
    {
        f.setn(n);
        s.seta(a);
    }

    void join()
    {
        strcat(f.getn(), s.geta());
        cout << "name+address: " << f.getn()<<endl;
    }
};

int main()
{
    concat c;
    c.getinfo("Ram", "kathmandu");
    c.join();
    return 0;
}
