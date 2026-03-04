#pragma once

#include "coordPair.h"
#include "Piece.h"
#include "Field.h"

class Board {
private:
	coordPair dimensions;
	Piece* pieceArrayPointer;
	unsigned short pieceArraySize;
	
	Field** fields;
	coordPair fieldsSize;
public:
	Board();
	Board(int, int);
	~Board();

	bool initGame();

	coordPair get_dimensions();
	char get_symbol_at(coordPair);
};