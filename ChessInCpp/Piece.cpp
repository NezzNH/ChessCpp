#include "Piece.h"

#include <iostream>

Piece::Piece() {
	this->location.row = 0;
	this->location.column = 0;
	this->displaySymbol = 't';
}

Piece::~Piece() {
	std::cout << "We've destroyed the piece!";
}

Piece::Piece(coordPair inputCoords, char inputSymbol) {
	this->location = inputCoords; this->displaySymbol = inputSymbol;
}

Piece::Piece(int row, int column, char inputSymbol) {
	this->location.row = row;
	this->location.column = column;
	this->displaySymbol = inputSymbol;
}

MoveStructures::MoveStructures() {
	containsMoves = false;
	tp = move_structure_type::RAYCAST;
	moveOffsetSize = 0;
}

MoveStructures::MoveStructures(coordPair* moveArray, unsigned short size, move_structure_type type) {
	this->moveOffsetSize = size;
	this->moveOffsets = moveArray;
	this->containsMoves = true;
	this->tp = type;
}

MoveStructures::~MoveStructures() {
	free(moveOffsets);
}

void MoveStructures::initializeMoveSet(coordPair* moveArray, unsigned short size, move_structure_type type) {
	this->moveOffsetSize = size;
	this->moveOffsets = moveArray;
	this->containsMoves = true;
	this->tp = type;
}