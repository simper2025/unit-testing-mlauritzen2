#include "pch.h"
#include "Board.h"


void Board::SetBoard(char setup[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = setup[i][j];
		}
	}
}

char Board::GetSquare(int row, int col) const
{
	return grid[row][col];
}

bool Board::SetSquare(int row, int col, char player)
{
	if (grid[row][col] == ' ')
	{
		if (player == 'X')
			grid[row][col] = 'X';

		else
			grid[row][col] = 'O';
		return true;
	}
	return false;
}

char Board::GameStatus()
{
	return ' ';
}

