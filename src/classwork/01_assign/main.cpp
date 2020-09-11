//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>


	using std::cout;
	using std::cin;

int main() 
{
	int num1;
	int num2;
	cout<<"enter a number: ";
	cin>>num1;
	cout<<"enter a second number: ";
	cin>>num2;
	std::cout<<multiply_numbers(num1,num2);
	return 0;
}

