#include "Field.h"

char Field::return_symbol() {
	if (this->piece) return (*piece).displaySymbol;
	else return ' ';
}

Field::Field(int row, int column) {
	this->coords.row = row; this->coords.column = column;
}

Field::Field() { coords.row = 0; coords.column = 0; }