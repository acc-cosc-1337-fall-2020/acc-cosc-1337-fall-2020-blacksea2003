//cpp
#include "tic_tac_toe.h"
using namespace std;
bool tic_tac_toe::game_over()
{
    return check_board_full();
}

void tic_tac_toe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

void tic_tac_toe::mark_board(int position){
    pegs[position-1] == player;
    set_next_player();
}

string tic_tac_toe::get_player() const{
    return player;
}

void tic_tac_toe::display_board() const {
        cout<<"["<<pegs[1]<<"]["<<pegs[2]<<"]["<<pegs[3]<<"]\n";
        cout<<"["<<pegs[4]<<"]["<<pegs[5]<<"]["<<pegs[6]<<"]\n";
        cout<<"["<<pegs[7]<<"]["<<pegs[8]<<"]["<<pegs[9]<<"]\n";
}

void tic_tac_toe::set_next_player() {
    if(player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

bool tic_tac_toe::check_board_full() {
    for(int i =0 ; i < 9; i++) {
        if(pegs[i] == " ") {
            return false;
        }
    }
    return true;
}

void tic_tac_toe::clear_board() {
    for(int i =0 ; i < 9; i++) {
        pegs[i] = " ";
    }
}