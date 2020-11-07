#include<iostream>

//bank_account.h
#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}
private:
    int branch_balance;
};


#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
public:
    BankAccount() = default; //behave like the default constructor c++ creaates 
    explicit BankAccount(int b);
    virtual int get_balance()const = 0; //inline function
    void deposit(int amount);
    void withdraw(int amount);
    friend void display_balance(const BankAccount& a);//NOT A CLASS FUNCTION - it is a free function
    friend void BranchBank::update_balance(int b);
    static int get_bank_balance(){return bank_balance;}
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
    friend std::istream& operator>>(std::istream& in, BankAccount& a);
    //friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);

protected:


private: // access specifier
    int balance{0};// class member
    static int bank_balance;


}; //dont forget semicolon!!!

#endif
// these function dont belong to the bank account class
void display_bank_account_data(BankAccount& b); // free function
BankAccount get_account(); // free function