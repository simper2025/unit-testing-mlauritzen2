#include "pch.h"
#include "Board.h"


void Board::SetBoard(char setup[3][3])
{
	
}

char Board::GetSquare(int row, int col) const
{
	return 'X';
}

bool Board::SetSquare(int row, int col, char player)
{
	return false;
}

char Board::GameStatus()
{
	return ' ';
}

