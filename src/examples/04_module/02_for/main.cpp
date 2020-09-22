#include"for.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{

	int value;
	char choice = 'y';

	while(choice == 'y' || choice == 'Y')
	{}

	cout<<"enter a number: ";
	cin>>value;

	display_numbers(value);

	int result;
	result = sum_numbers(value);
	cout<<"\nresult(sum_numbers): "<<result;

	cout<<"\nenter y to continue:";
	cin>>choice;

	return 0;
}