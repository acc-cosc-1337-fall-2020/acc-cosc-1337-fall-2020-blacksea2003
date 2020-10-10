#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account initial balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}
TEST_CASE("Test bank account deposit")
{
	BankAccount account(0);
	REQUIRE(account.get_balance() == 0);
	account.deposit(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account withdraw")
{
	BankAccount account(0);
	REQUIRE(account.get_balance()==0);

	account.deposit(100);
	REQUIRE(account.get_balance()==100);

	account.withdraw(50);
	REQUIRE(account.get_balance()==50);

}

TEST_CASE("Test bank account deposit with negative amount")
{
	BankAccount account(0);
	REQUIRE(account.get_balance() == 0);
	account.deposit(-100);
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account withdraw with negative amount")
{
	BankAccount account(0);
	REQUIRE(account.get_balance()==0);

	account.deposit(100);
	REQUIRE(account.get_balance()==100);

	account.withdraw(-50);
	REQUIRE(account.get_balance() == 100);

}

TEST_CASE("Test bank account default constructor")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}
TEST_CASE("Test bank account deposit default constructor")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	account.deposit(100);
	REQUIRE(account.get_balance() == 100);
}