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

    std::string buffer, prevLines, lastMovePair;

    while(getline(pieceDefsFile, buffer)) {
        if (buffer == "PIECEDEF") {
            if (prevLines == "" || prevLines == "PIECEDEF") continue;
            else {
                if (buffer[0] == 'D' || buffer[0] == 'R') {
                    bool startedPair = false;
                    for (int i = 2; i < buffer.length(); ++i) {
                        if (buffer[i] == '[') {
                            startedPair = true;
                        }
                        else if (buffer[i] == ']' && startedPair) {
                            moveStructureSize++; startedPair = false;
                        }
                        else continue;
                    }

                    tempMovesArray = new coordPair[moveStructureSize];

                    for (int i = 2; i < buffer.length(); ++i) {
                        std::string half1, half2;
                        int j = 0;
                        if (buffer[i] == '[') lastMovePair.clear();
                        else if (buffer[i] == ']') {
                            while (lastMovePair[j] != ',') {
                                half1 += lastMovePair[j]; ++j;
                            }
                            half2 = lastMovePair.substr(j+1, lastMovePair.length() - (j+1)); //not sure if substr wants length or positions
                            
                        }
                        else lastMovePair += buffer[i];
                    }
                }
            }
        }
    }


}