#include <cstdlib>
#include <iostream>

#include "Display.h"

void Display::refresh() {
	switch (this->dspmd) {
	case display_mode::GAME:
		display_game();
		break;
	case display_mode::GAME_OVER:
		display_game_over();
		break;
	case display_mode::GAME_STARTING:
		display_game_starting();
		break;
	case display_mode::MENU:
		display_menu();
		break;
	default:
		system("cls");
	}
}

void Display::display_game() {

	coordPair temp = { 0, 0 };

	for (int i = 0; i < dimensions.column; i++) std::cout << "  ";
		std::cout << "\n";
	for (int i = 0; i < dimensions.row; i++) {
		temp.row = i;
		for (int j = 0; j < dimensions.column; j++) {
			temp.column = j;
			
			std::cout << this->board.get_symbol_at(temp) << " ";
		}
		std::cout << "\n";
	}
	
	for (int i = 0; i < dimensions.column; i++) std::cout << "  "; //maybe remove this later
		std::cout << "\n";

}

void Display::display_menu() {
	std::cout << "chess game menu:\n\n\n\n\n";



}