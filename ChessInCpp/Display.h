#pragma once

#include "Board.h"
#include "coordPair.h"

enum display_mode { GAME, GAME_OVER, GAME_STARTING, MENU };

class Display {
private:
	Board* board;
	coordPair dimensions;

	display_mode dspmd;

	void display_game();
	void display_game_over();
	void display_menu();
	void display_game_starting();
public:
	Display();
	void changeDisplayMode();
	void refresh();
};