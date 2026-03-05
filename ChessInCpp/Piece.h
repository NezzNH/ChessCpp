#pragma once

#include "coordPair.h"

enum class move_structure_type{DISCRETE, RAYCAST};

class MoveStructures {
private:
	move_structure_type tp;
	bool containsMoves;
	coordPair* moveOffsets;
	unsigned short moveOffsetSize;
public:
	MoveStructures();
	~MoveStructures();
	MoveStructures(coordPair*, unsigned short, move_structure_type);
	void initializeMoveSet(coordPair*, unsigned short, move_structure_type);
};

class Piece {
private:
	coordPair location;
	MoveStructures discreteMoveSet, raycastMoveSet;
public:
	char displaySymbol;

	Piece();
	~Piece();
	Piece(coordPair, char);
	Piece(int, int, char);
};