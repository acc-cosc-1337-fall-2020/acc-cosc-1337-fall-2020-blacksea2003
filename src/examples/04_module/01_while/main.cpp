#include "while.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{
	int number;
	char choice = 'y';


	while(choice == 'y')
	{
			cout<<"enter number: ";
			cin>>number;

			int sum = sum_of_squares(number);
			cout<<"sum is: "<<sum<<"\n";

			cout<<"Enter y to continue: ";
			cin>>choice;
	}

	return 0;
}