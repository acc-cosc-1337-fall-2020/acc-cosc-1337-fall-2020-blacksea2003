//bank_account.cpp
#include "bank_account.h"
#include<iostream>
#include<stdlib.h> //for rand function

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
    // free function - friend of bank account class
    void display_balance(const BankAccount& a)
    {
        std::cout<<"Friend display Balance: "<<a.balance<<"\n";
    }

std::ostream& operator<<(std::ostream& out, const BankAccount& a)
{
    out<<"overload display balance: "<<a.balance<<"\n";
    return out;
}
std::istream& operator>>(std::istream& in, BankAccount& a)
{
    int amount;
    std::cout<<"Enter amount: ";
    in>>amount;
    a.balance += amount;
    return in;
}
BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
{
    BankAccount account(a1.balance + a2.balance);

    return account;
}
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

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}