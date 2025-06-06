/*
Define a class to represent bowlers in a cricket team with data members name, Overs
bowled, Runs given, Wickets taken and use constructor to initialize values and use
member function to display bowlers information.
*/

#include<iostream>
#include<string.h>
using namespace std;
class Bowler {
    private:
    char name[20];
    int oversBowled, runsGiven, wicketTaken;
    public:
    Bowler(char n[], int o, int r, int w) {
        strcpy(name, n);
        oversBowled = o; 
        runsGiven = r;
        wicketTaken = w;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Overs bowled:"<<oversBowled<<endl;
        cout<<"Runs given:"<<runsGiven<<endl;
        cout<<"Wicket taken:"<<wicketTaken<<endl;
    }
};
int main() {
    char name[20];
    int overs, runs, wickets;
    cout<<"Enter name of the player:\n";
    cin>>name;
    cout<<"Enter overs bowled by the player:\n";
    cin>>overs;
    cout<<"Enter the runs given by the player:\n";
    cin>>runs;
    cout<<"Enter the wickets taken by the player:\n";
    cin>>wickets;
    Bowler b1(name, overs, runs, wickets);
    b1.display();
    return 0;
}