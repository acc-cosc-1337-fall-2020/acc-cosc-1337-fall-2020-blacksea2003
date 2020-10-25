#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	tic_tac_toe p;
	std::string player;
	cout<<"Enter 'X' or 'O': ";
	cin>>player;
	p.start_game(player);
	int num;
	while(!p.game_over())
	{
		cout<<"enter a number from 1-9: ";
		cin>>num;
		p.mark_board(num);
		p.display_board();
	}
	return 0;
}