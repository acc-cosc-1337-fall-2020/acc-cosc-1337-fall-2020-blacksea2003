//bank_account.h
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
public:
    BankAccount() : BankAccount(0){}
    BankAccount(int b);
    int get_balance()const{return balance;}//inline function
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}

private: // access specifier
    int balance;// class member
    static int bank_balance;
    int customer_no;


}; //dont forget semicolon!!!

#endif
// these function dont belong to the bank account class
void display_bank_account_data(BankAccount& b); // free function
BankAccount get_account(); // free function