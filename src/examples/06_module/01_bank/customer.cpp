//customer.cpp
#include "customer.h"

Customer::Customer(int id, std:string n) : customer_id(id), name(n)
{
    accounts.push_back(std::make_unique<CheckingAccount>(get_balance_from_db()));
    accounts.push_back(std::make_unique<SavingsAccount>(get_balance_from_db()));
    std::cout<<"customer vector: "<<accounts.size()<<"\n";
}

void Customer::get_balance_from_db()
{
    return rand() % 10000 + 1;
}