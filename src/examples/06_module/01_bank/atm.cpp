//atm.cpp
#include "atm.h"


using std::cout; using std::cin;

ATM::ATM() 
{
    customers.push_back(Customer(1, "john doe"));
    customers.push_back(Customer(2, "mary doe"));
    customers.push_back(Customer(3, "john hancock"));
    customers.push_back(Customer(4, "mary hancock"));

}

void scan_card()
{
    cout<<"enter 1 for checking 2 for saving: ";
    cin>>account_index;
    customer_index = rand() % customers.size()-1 + 1;
}

void ATM::display_balance()
{
    cout<<"Balance: "<<customers[customer_index].get_account(account_index -1)<<"\n";
}
