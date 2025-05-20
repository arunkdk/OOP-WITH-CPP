/*
Define a class named ‘Bank Account’ to represent following members
Data members:-
• Account Number
• Name of Depositor
• Account Type
• Balance Amount
Member functions:
• Initialize members
• Deposit Amount
• Withdraw Amount
• Display Balance
*/

#include<iostream>
using namespace std;
class bankAccount
{
    private:
    long int acc_no;
    char dep_name[20];
    char type[20];
    float balance;
    public:
    void initialize()
    {
        cout<<"Enter bank account number:";
        cin>>acc_no;
        cin.ignore();
        cout<<"Enter your name:";
        cin.getline( dep_name, 20 );
        cout<<"Enter your account type:";
        cin.getline( type, 20 );
        cout<<"Enter your balance amount:";
        cin>>balance;
    }
    void depositAmount()
    {
        float deposit;
        cin>>deposit;
        balance=balance + deposit;
    }
    void withDraw()
    {
        float drawAmount;
        cin>>drawAmount;
        balance=balance - drawAmount;
    }
    void displayBalance()
    {
        cout<<"YOur total balance is now "<<balance;
    }
};
int main()
{
    bankAccount b;
    cout<<"Enter the info of bank account:\n";
    b.initialize();
    cout<<"Enter the amount of money you want do deposit:";
    b.depositAmount();
    cout<<"Enter amount of money you want to with draw:";
    b.withDraw();
    b.displayBalance();
    return 0;
}