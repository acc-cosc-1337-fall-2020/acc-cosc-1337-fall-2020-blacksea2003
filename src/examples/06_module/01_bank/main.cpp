#include "bank_account.h"
#include<iostream>
#include "atm.h"



using std::cout;
int main()
{
	// initial will come from another class that retrieves balance from DB
	BankAccount checking_account(100);//create an instance of the class
	ATM atm(checking_account);
	atm.display_balance();
	/*cout<<"balance: "<<checking_account.get_balance()<<"\n";
	cout<<"bank balance: "<<checking_account.get_bank_balance()<<"\n\n";

	BankAccount new_account;
	cout<<"balance: "<<new_account.get_balance()<<"\n";

	display_bank_account_data(new_account);
	cout<<"balance: "<<new_account.get_balance()<<"\n";
	//cout<<"bank balance: "<<account.get_bank_balance()<<"\n\n";

	BankAccount account = get_account();
	cout<<"account balance: "<<new_account.get_balance()<<"\n";

	cout<<"bank balance: "<<account.get_bank_balance();

	BankAccount copied_account = checking_account;
	cout<<"balance checking: "<<checking_account.get_balance()<<"\n";

	cout<<"balance copied: "<<copied_account.get_balance()<<"\n\n";

	checking_account.deposit(100);
	copied_account.deposit(100);
	cout<<"balance checking: "<<checking_account.get_balance()<<"\n";
	cout<<"balance copied: "<<copied_account.get_balance()<<"\n\n";

	cout<<"bank balance: "<<copied_account.get_bank_balance();*/

	return 0;
}