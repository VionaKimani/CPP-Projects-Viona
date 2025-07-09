/*
 Author:Viona Kimani
 Reg no:BBIT-01-0008/2025
 Description:Program to help calculate the body mass index.
 Date:28/05/2025
 Version 1
 */

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void setAccountHolder(string acc) {
        accountHolder = acc;
    }

    void setBalance(double bal) {
        balance = bal;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount bnk;
    bnk.setAccountHolder("Viona");
    bnk.setBalance(3000000);

    cout << "AccountHolder: " << bnk.getAccountHolder() << endl;
    cout << "Balance: " << bnk.getBalance() << endl;

    return 0;
}