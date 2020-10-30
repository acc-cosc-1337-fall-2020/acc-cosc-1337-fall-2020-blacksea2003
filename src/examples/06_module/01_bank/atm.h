//atm.h
#include "bank_account.h"
#include<iostream>
#include "customer.h"
#include<vector>
#ifndef ATM // header guards
#define ATM_H // headerguards

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance();
private:
    std::vector<Customer> customers;
    int customer_index;
    int account_index;

};
#endif//header guard