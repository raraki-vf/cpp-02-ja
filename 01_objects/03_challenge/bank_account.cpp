#include "bank_account.h"

BankAccount::BankAccount(double money){
    set_balance(money);
}

double BankAccount::get_balance(){
    return balance;
}

void BankAccount::set_balance(double money){
    balance = money;
}

void BankAccount::deposit(double money){
    double pre_balance;
    pre_balance = get_balance();
    set_balance(pre_balance + money);
    std::cout << "Current balance: " << pre_balance + money << std::endl;
}

void BankAccount::withdraw(double money){
    double pre_balance;
    pre_balance = get_balance();

    if (pre_balance - money >= 0){
        set_balance(pre_balance - money);
        std::cout << pre_balance - money << std::endl;
    } else {
        std::cout << "Insufficient balance!" << std::endl;
    }
}
