#pragma once
#include <iostream>

class BankAccount {
    double balance;

    public:
        BankAccount(double money);
        double get_balance();
        void set_balance(double money);
        void deposit(double money);
        void withdraw(double money);
};