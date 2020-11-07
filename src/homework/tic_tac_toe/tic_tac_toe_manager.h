//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
class tic_tac_toe_manager
{
    public:
        friend void std::ostream& operator<<(std::ostream& out, const tic_tac_toe& m);
        void save_game(tic_tac_toe b);
        void get_winner_total(int& o, int& w, int&t);

    private:
        std::vector<int> games{};
        int o_win = 0;
        int x_win = 0;
        int tie = 0;
        void update_winner_count(std::string winner);

}
#endif