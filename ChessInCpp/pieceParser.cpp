#include "pieceParser.h"

#include <fstream>

PieceParser::PieceParser() {
    this->pieces = nullptr;
    this->piecesSize = 0;
    this->piece_def_file_path = "";
}

PieceParser::~PieceParser() {
    free(pieces); //no need to check if its a nullptr. hooray!
}

Piece* PieceParser::parsePieces(int* outputSize, std::string filePath) {
    if (filePath != "") {
        //do some other stuff
    }

    


}