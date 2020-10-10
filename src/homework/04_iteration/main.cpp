//write include statements
#include "dna.h"
#include<iostream>
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int option;
	std::string dna_string;
	char yes_no = 'y';

	while(yes_no == 'y' || yes_no == 'Y')
	{
	cout<<"\nEnter 1 for GC Content or enter 2 for DNA Compliment: ";	
	cin>>option;

	switch(option)
    {
        case 1:
			cout<<"\nEnter a dna string: ";
			cin>> dna_string;
            cout<<"\ngc content of dna is "<<get_gc_content(dna_string);
            break;
        case 2:
			cout<<"\nEnter a dna string: ";
			cin>> dna_string;
            cout<<"\ndna complement is "<<get_dna_complement(dna_string);
            break;
        default:
            cout<<"\nInvalid Option";
    }
	cout<<"\nenter y or Y to continue: ";
	cin>>yes_no;
	}


	return 0;
}