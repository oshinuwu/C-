#include <iostream>
using namespace std;
class bank_account{
    string name, acc_type;
    int acc_number;
    double balance;
    public:
    bank_account(string a,string b, int c, double d){
        name=a;
        acc_type=b;
        acc_number=c;
        balance=d;
    }
    void initial(){
        cout<<"\nAccount number : "<<acc_number<<endl
        <<"Name : "<<name<<endl
        <<"Account type : "<<acc_type<<endl
        <<"Balance : "<<balance<<endl;
    }
    void deposit(int plus){
        balance +=plus;
        cout<<"\n\nYou have depositted rs "<<plus<<". Your current balance is rs "<<balance;
    }
    void withdraw(int minus){
        if(minus>balance){
            cout<<"\n\nNot enough balance!";
        }
        else{
            balance-=minus;
            cout<<"\n\nYou have withdrawn rs "<<minus<<". Your current balance is rs "<<balance;
        }
    }
};
int main(){
    string n,type;
    int num,b;
    cout<<"Account number : ";
    cin>>num;
    cout<<"Name : ";
    cin>>n;
    cout<<"Account type : ";
    cin>>type;
    cout<<"Cash to be deposited initially : ";
    cin>>b;

    bank_account bank(n,type,num,b);
    bank_account bank2(n,type,num,b);
    cout<<"\n\nBank account created, here are your details :\n";
    bank.initial();

    char transaction;
    cout<<"\n\nEnter 'd' if you want to deposit and 'w' if you want to withdraw : ";
    cin>>transaction;
    switch(transaction){
        case('d'):
        int sum;
        cout<<"How much? : ";
        cin>>sum;
        bank.deposit(sum);
        break;

        case('w'):
        int diff;
        cout<<"How much do you want to withdraw? : ";
        cin>>diff;
        bank.withdraw(diff);
        break;

        default:
        cout<<"Invalid input";
        break;
    }
   
     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-d";
    fflush(stdin);
    cin.get();
     return 0;
       }
