#include <iostream>
using namespace std;

struct BankAccount{
    float balance;
    BankAccount():balance(10.0){}
    void deposit(float amount){
        balance=balance+amount;
    }
    void withdraw(float amount){
        balance=balance-amount;
    }
    void getBalance(){
        cout<<balance<<endl;
    }
};

int main(){
    BankAccount account1;
    cout<<account1.balance<<endl;
    account1.deposit(25.0);
    cout<<account1.balance<<endl;
    account1.withdraw(25.0);
    cout<<account1.balance<<endl;
    account1.getBalance();
}