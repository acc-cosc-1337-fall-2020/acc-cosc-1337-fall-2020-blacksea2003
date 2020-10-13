//atm.h
#include "bank_account.h"
#include<iostream>
#ifndef ATM // header guards
#define ATM_H // headerguards

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance()const;
    
private:
    BankAccount& account;
};
#endif//header guard