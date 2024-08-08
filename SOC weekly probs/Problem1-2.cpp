#include <iostream>
using namespace std;

class BankAccount{
    private:
        float balance;
    
    public:

        BankAccount():balance(10.0){}  // constructor to initialize balance

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
    account1.getBalance();
    account1.deposit(25.0);
    account1.getBalance();
    account1.withdraw(25.0);
    account1.getBalance();
}