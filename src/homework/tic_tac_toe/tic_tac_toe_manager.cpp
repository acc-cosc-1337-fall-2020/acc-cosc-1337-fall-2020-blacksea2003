//cpp
#include "tic_tac_toe_manager.h"
using namespace std;

void tic_tac_toe_manager::save_game(tic_tac_toe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

friend void ostream& operator<<(std::ostream& out, const tic_tac_toe& m)
{
    for(int x:m.pegs)
    {
        cout<< m;
    }
}

void tic_tac_toe_manager::update_winner_count(std::string winner)
{
    if(winner == "x")
    [
        x_win += 1;
    ]else if(winner == "o")
    {
        o_win += 1;
    }else
    {
        tie += 1;
    }
}