#include <iostream>
#include <string>

class BankAccount {
public:
    std::string owner;
    int balance;

    BankAccount(std::string owner, int balance) : owner(owner), balance(balance) {}

    int deposit(int amount) {
        if (amount > 0) {
            this->balance = this->balance + amount;
            std::cout << "Deposited " << amount << std::endl;
        }
        return this->balance;
    }

    int withdraw(int amount) {
        if (0 < amount && amount <= this->balance) {
            this->balance = this->balance - amount;
            std::cout << "Withdrew " << amount << std::endl;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
        return this->balance;
    }
};

int main() {
    BankAccount account("Bob", 200);
    account.deposit(100);
    account.withdraw(50);
    std::cout << "Balance: " << account.balance << std::endl;
    return 0;
}
