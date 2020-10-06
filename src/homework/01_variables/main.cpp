//write include statements
#include "variables.cpp"
#include<iostream>

//write namespace using statement for cout
	using std::cin; using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<< "enter meal amount: ";
	cin>>meal_amount;

	tax_amount = xget_sales_tax_amount(meal_amount);

	cout<<"enter tip rate: ";
	cin>>tip_rate;
	
	tip_amount = xget_tip_amount(meal_amount,tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"meal amount: "<<meal_amount<<"\n";
	cout<<"sales tax: "<<tax_amount<<"\n";
	cout<<"tip amount: "<<tip_amount<<"\n";
	cout<<"total: "<<total<<"\n";

	return 0;
}
