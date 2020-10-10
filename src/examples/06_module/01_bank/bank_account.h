//bank_account.h
class BankAccount
{
public:
    BankAccount() : BankAccount(0){}
    BankAccount(int b);
    int get_balance()const{return balance;}//inline function
    void deposit(int amount);
    void withdraw(int amount);

private: // access specifier
    int balance;// class member


}; //dont forget semicolon!!!

// these function dont belong to the bank account class
void display_bank_account_data(BankAccount& b); // free function
BankAccount get_account(); // free function