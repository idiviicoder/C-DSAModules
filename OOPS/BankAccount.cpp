#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    const long accountNumber;
    double balance;
    static double interestRate;

public:
    BankAccount(long accNo, double bal) 
        : accountNumber(accNo), balance(bal) {}

    double getBalance() const { return balance; }

    void deposit(double amt) {
        if (amt > 0) balance += amt;
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= balance) balance -= amt;
    }

    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    void applyInterest() {
        balance += balance * interestRate; // add interest, not overwrite
    }
};

// Define static member
double BankAccount::interestRate = 0.05;

int main() {
    BankAccount acc1(101, 1000);
    acc1.applyInterest();
    cout << "Balance after interest: " << acc1.getBalance() << "\n";

    acc1.deposit(500);
    acc1.withdraw(200);
    cout << "Final balance: " << acc1.getBalance() << "\n";

    return 0;
}
