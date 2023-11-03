#include<iostream>
#include<string>
using namespace std;

class Bank{
    private:
    string name;
    int accNum;
    string type;
    int balance;

    public:
    void intialVal(string n, int acc, string t, int bal){
        name = n;
        accNum = acc;
        type = t;
        balance = bal;
    }

    void Account(){
        cout<<"Enter you name:";
        cin>>name;
        cout<<"Enter your account number:";
        cin>>accNum;
        cout<<"Account Type: ";
        cin>>type;
        cout<<"Balance: ";
        cin>>balance;
    }

    void deposit(){
        int amount, dep;
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        dep = amount + balance;
        cout<<dep<<endl;
        exit(1);
    }
    void withdraw(){
        int withDraw, withDAmount;
        cout<<"Enter the amount you want to withdraw:";
        cin>>withDraw;
        withDAmount = balance - withDraw;
        cout<<withDAmount<<endl;
        exit(1);
    }
    void diplay(){
        cout<<"You are "<<name;
        cout<<"You're balance is "<<balance;
    }


};
int main(){
    Bank bank;
    bank.Account();

    int type;
    cout<<"Enter your type:\n ";
    cout<<"1. Account Deposit\n";
    cout<<"2. Account withdraw\n";
    cout<<"3. Display details\n";
    cin>>type;

        switch (type)
        {
        case 1:
            bank.deposit();
            break;
        
        case 2:
            bank.withdraw();
            break;
        case 3:
            bank.diplay();
            break;
        default:
            cout<<"Invalid choice";
            break;
        }
        exit(1);
    
}