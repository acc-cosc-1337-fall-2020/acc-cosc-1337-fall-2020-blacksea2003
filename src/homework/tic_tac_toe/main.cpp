#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	tic_tac_toe p;
	tic_tac_toe_manager m;
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
	m.save_game(p);
	cout<<m;
	cout<<"\nenter y to play again: ";
	cin>>choice;
	}




	return 0;
}