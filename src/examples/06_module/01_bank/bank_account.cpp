//bank_account.cpp
#include "bank_account.h"
#include<iostream>

BankAccount::BankAccount(int b) : balance(b)
{
    //code for validating data
    bank_balance += balance;
}


void BankAccount::deposit(int amount)
{   
    if(amount>0)
    {
    balance += amount;
    bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
        bank_balance += amount;
    }
}

    int BankAccount::bank_balance = 0;

// free functions do not belong to the bankaccount class

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