#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include<iostream>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify winner is tie")
{
	tic_tac_toe p;
	p.start_game("X");

	p.mark_board(1);
	REQUIRE(p.game_over()==false);
	p.mark_board(2);
	REQUIRE(p.game_over()==false);
	p.mark_board(3);
	REQUIRE(p.game_over()==false);
	p.mark_board(4);
	REQUIRE(p.game_over()==false);
	p.mark_board(5);
	REQUIRE(p.game_over()==false);
	p.mark_board(7);
	REQUIRE(p.game_over()==false);
	p.mark_board(6);
	REQUIRE(p.game_over()==false);
	p.mark_board(9);
	REQUIRE(p.game_over()==false);
	p.mark_board(8);
	REQUIRE(p.game_over()==false);
	p.game_over();
	REQUIRE(p.get_winner() == "C");
	
}

TEST_CASE("Test first player set to X")
{
	tic_tac_toe p;
	p.start_game("X");
	REQUIRE(p.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	tic_tac_toe p;
	p.start_game("O");
	REQUIRE(p.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(1);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(5);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(4);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(7);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win by second column")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(2);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(1);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(5);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(8);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win by third column")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(3);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(8);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(6);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(7);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(9);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win by first row")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(1);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(4);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(2);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(7);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win by second row")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(4);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(5);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(7);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(6);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win by third row")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(7);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(4);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(8);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(9);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win diagonally from top left")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(1);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(4);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(5);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(7);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(9);//X
	REQUIRE(p.game_over()==true);
}

TEST_CASE("Test win diagonally from bottom left")
{
	tic_tac_toe p;
	p.start_game("X");
	p.mark_board(7);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(4);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(5);//X
	REQUIRE(p.game_over()==false);
	p.mark_board(8);//O
	REQUIRE(p.game_over()==false);
	p.mark_board(3);//X
	REQUIRE(p.game_over()==true);
}