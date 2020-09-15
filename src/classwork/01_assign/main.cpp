//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>


	using std::cout;
	using std::cin;

int main() 
{
	int num1;
	int num2 = 4;
	cout<<"enter a number: ";
	cin>>num1;
	
	std::cout<<multiply_numbers(num1);
	return 0;
}

