#include "Board.h"
#include "Field.h"

#include <cstdlib>

Board::Board() {
	this->dimensions = { 8, 8 }; //this is just how chess boards are usually structured, make this a constant defined per txtfile of game sesh
	pieceArrayPointer = nullptr;
	pieceArraySize = 0;

	this->fieldsSize.column = this->dimensions.column;
	this->fieldsSize.row = this->dimensions.row;

	fields = new Field*[this->fieldsSize.row];

	for (int i = 0; i < this->fieldsSize.column; ++i) fields[i] = new Field[this->fieldsSize.column];
}

char Board::get_symbol_at(coordPair coords) {
	return this->fields[coords.row][coords.column].return_symbol();
}

coordPair Board::get_dimensions() {
	return this->dimensions;
}

Board::~Board() {
	for (int i = 0; i < this->dimensions.row; ++i) {
		free(fields[i]);
	}

	free(fields);
}

bool Board::initGame() {
	
}