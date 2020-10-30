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
    customer_index = rand() % customers.size()-1 + 1;

    cout<<"welcome to ACC Bank \n";
    cout<<"1 - Checking Account\n";
    cout<<"2- savings Acccount\n";
    cout<<"enter your selection: \n";
    cin>>account_index;
}

void ATM::display_balance()
{
    std::unique_ptr<BankAccount>& account = customers[customer_index].get_account(account_index-1);
    cout<<"Balance: "<<account->get_balance()<<"\n";
}
