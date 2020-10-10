//bank_account.cpp
#include "bank_account.h"
#include<iostream>

BankAccount::BankAccount(int b) : balance(b)
{

}


void BankAccount::deposit(int amount)
{
    if(amount>0)
    {
    balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
    }
}

void display_bank_account_data(BankAccount& b)
{
    b.deposit(50);
    std::cout<<"balance: "<<b.get_balance()<<"\n";

}

BankAccount get_account()
{
    //class that retreive DB balance and creates bankaccont
    BankAccount a(1000);

    return a;
}