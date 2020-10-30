#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	tic_tac_toe p;
	std::string player;
	int num;
	char choice = 'y';

	while(choice == 'y')
	{
	cout<<"\nEnter 'X' or 'O': ";
	cin>>player;
	p.start_game(player);
	while(!p.game_over())
	{
		cout<<"\nenter a number from 1-9: ";
		cin>>num;
		p.mark_board(num);
		p.display_board();
	}
	cout<<"\nwinner is: "<<p.get_winner();
	cout<<"\nenter y to play again: ";
	cin>>choice;
	}




	return 0;
}