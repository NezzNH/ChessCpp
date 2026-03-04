#include "ChessInCpp.h"

#include "Board.h"
#include "coordPair.h"

using namespace std;

int main()
{
	Board board;
	coordPair temp;

	int a;

	temp = board.get_dimensions();

	cout << "dim: " << temp.row << "," << temp.column << "\n";

	cin >> a;
	
	return 0;
}

/*

	TO-DO:

	make a class named text-parser, which aims to take a text file (either pointer or path) and
	parses out the data in some kind of array that the Board class can read to initialize the board, or read moves

	the point is that each game session is going to be stored in a single text file, maybe named date and time or so on

	then, init data like the board dimension and starting position are declared once, and for all games down the file
	until a redeclaration are implicitly started with these conditions

	if no condition is listed, it is assumed that the default chess starting position is taken, so thats
	hard coded into some constant of some file i assume

	the array should probably be some kind of struct pair or such, containing the piece and its location, though
	i could honestly return an array of piece classes and just copy contrust them onto the board

	though, honestly, this doesnt seem like a terribly good idea, so ill likely take raw text, and using some function
	interpret that string as an init condition

	obviously, this system should also check for errors, like the same piece being initialized twice, two pieces on one field
	initializing a piece outside of the boards dimensions etc.

	make another function that specifically saves the information of a move, and tries to interpret it back

	this will be such a problem because it will have to be fast but also account for exotic things like
	multiple queens targeting the same square, so the question of which one moves needs to be specially notated

	how do i know that the special notation should hold here?

	the most expanded form of a chess move is that of the form:

	[Type][LocationOfMovedPiece][destination]
	
	where [LocationOfMovedPiece] is ommited in most cases, as two pieces of the same type rarely are able to move to the same field

	and [Type] is ommited if the piece is a pawn

	this will probably harken back to my original C# chess project, wherein i handled such conflicts using a claim field system

	ill probably use the same thing here
*/

