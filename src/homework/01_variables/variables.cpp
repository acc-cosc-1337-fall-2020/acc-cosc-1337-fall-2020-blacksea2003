#include "variables.h"

//example
int xadd_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

const double tax_rate = .0675;

double xget_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;
}

double xget_tip_amount(double meal_amount,double tip_rate)
{
	return meal_amount * tip_rate;
}