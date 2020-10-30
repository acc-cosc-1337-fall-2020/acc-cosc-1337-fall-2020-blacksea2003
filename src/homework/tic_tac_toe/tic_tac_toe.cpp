//cpp
#include "tic_tac_toe.h"
using namespace std;
//homework 5
bool tic_tac_toe::game_over()
{
    if(check_row_win()){
        set_winner();
        return true;
    }else if(check_column_win()){
        set_winner();
        return true;
    }else if(check_diagonal_win()){
        set_winner();
        return true;
    }else if(check_board_full()){
        winner = "C";
        return true;
    }else{
        return false;
    }
}

void tic_tac_toe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

void tic_tac_toe::mark_board(int position){
    pegs[position-1] = player;
    set_next_player();
}

string tic_tac_toe::get_player() const{
    return player;
}

void tic_tac_toe::display_board() const {
        cout<<"["<<pegs[0]<<"]["<<pegs[1]<<"]["<<pegs[2]<<"]\n";
        cout<<"["<<pegs[3]<<"]["<<pegs[4]<<"]["<<pegs[5]<<"]\n";
        cout<<"["<<pegs[6]<<"]["<<pegs[7]<<"]["<<pegs[8]<<"]\n";
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
    for(int i =0 ; i < pegs.size(); i++) {
        pegs[i] = " ";
    }
}

//homework 6
string tic_tac_toe::get_winner()
{
    return winner;
}

bool tic_tac_toe::check_column_win(){
    if((pegs[0]=="X" && pegs[3]=="X" && pegs[6]=="X")||(pegs[1]=="X" && pegs[4]=="X" && pegs[7]=="X")||(pegs[2]=="X" && pegs[5]=="X" && pegs[8]=="X")){
        return true;
    }else if((pegs[0]=="O" && pegs[3]=="O" && pegs[6]=="O")||(pegs[1]=="O" && pegs[4]=="O" && pegs[7]=="O")||(pegs[2]=="O" && pegs[5]=="O" && pegs[8]=="O")){
        return true;
    }else{
        return false;
    }
}

bool tic_tac_toe::check_row_win(){
    if((pegs[0]=="X" && pegs[1]=="X" && pegs[2]=="X")||(pegs[3]=="X" && pegs[4]=="X" && pegs[5]=="X")||(pegs[6]=="X" && pegs[7]=="X" && pegs[8]=="X")){
        return true;
    }else if((pegs[0]=="O" && pegs[1]=="O" && pegs[2]=="O")||(pegs[3]=="O" && pegs[4]=="O" && pegs[5]=="O")||(pegs[6]=="O" && pegs[7]=="O" && pegs[8]=="O")){
        return true;
    }else{
        return false;
    }
}

bool tic_tac_toe::check_diagonal_win(){
    if((pegs[0]=="X" && pegs[4]=="X" && pegs[8]=="X")||(pegs[0]=="O" && pegs[4]=="O" && pegs[8]=="O")){
        return true;
    }else if((pegs[6]=="X" && pegs[4]=="X" && pegs[2]=="X")||(pegs[6]=="O" && pegs[4]=="O" && pegs[2]=="O")){
        return true;
    }else{
        return false;
    }
}

void tic_tac_toe::set_winner(){
    if(player == "X"){
        winner = "O";
    }else{
        winner = "X";
    }
}