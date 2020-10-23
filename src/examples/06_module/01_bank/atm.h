//atm.h
#include "bank_account.h"
#include<iostream>
#include<vector>
#ifndef ATM // header guards
#define ATM_H // headerguards

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance()const;
private:
    std::vector<BankAccount> accounts;
    int get_balance_from_db();
    std::vector<BankAccount> accounts;
    int bank_account_index;

};
#endif//header guard