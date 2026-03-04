#pragma once

#include "coordPair.h"
#include "Piece.h"

class Field {
private:
	Piece *piece;
	coordPair coords;
public:
	Field();
	Field(int, int);
	Field(coordPair);
	Field(int, int, Piece*);
	Field(coordPair, Piece*);
	~Field();

	char return_symbol();
};