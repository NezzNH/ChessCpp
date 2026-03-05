#include "pieceParser.h"

#include <vector>
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

    Piece tempPiece;
    MoveStructures tempMoves;

    std::vector<Piece> temp_vector;

    int amountOfUniquePieces, moveStructureSize;
    coordPair* tempMovesArray;

    if (filePath != "") {
        //do some other stuff
    }
    else filePath = this->piece_def_file_path;

    std::ifstream pieceDefsFile(filePath);

    std::string buffer, prevLines = "", lastMovePair;

    while(getline(pieceDefsFile, buffer)) {
        if (buffer == "PIECEDEF") {
            if (prevLines != "") {
                
            }
            else prevLines += buffer + " ";
        }
    }


}

MoveStructures compose_move_structure(std::string inputString) {

}