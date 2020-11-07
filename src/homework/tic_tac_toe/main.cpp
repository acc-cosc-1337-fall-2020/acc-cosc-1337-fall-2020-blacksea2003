#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	tic_tac_toe p;
	std::string player;
	int num;
	char choice = 'y';
	cout<<"\nEnter 'X' or 'O': ";
	cin>>player;
	

	while(choice == 'y')
	{
	p.start_game(player);
	
	while(!p.game_over())
	{
		cin>>p;
		cout<< p;
	}
	cout<<"\nwinner is: "<<p.get_winner();
	cout<<"\nenter y to play again: ";
	cin>>choice;
	}




	return 0;
}