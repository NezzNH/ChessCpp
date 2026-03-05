#pragma once

#include <string>

#include "Piece.h"

class PieceParser{
private:
    std::string piece_def_file_path;
    Piece* pieces;
    unsigned int piecesSize;
public:
    PieceParser();
    ~PieceParser();   

    Piece* parsePieces(int*, std::string);
};