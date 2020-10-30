//h
#include<vector>
#include<iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class tic_tac_toe{
    public:
        bool game_over();
    //homework 5
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        void display_board() const;
    //homework 6
        std::string get_winner();

    private:
    //homework 5
        void set_next_player();
        bool check_board_full();
        void clear_board();
        std::string player;
        std::vector<std::string> pegs{9," "};
    //homework 6
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        std::string winner;

};
#endif