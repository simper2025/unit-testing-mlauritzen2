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
	if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2] && grid[0][0] != ' ')
		return grid[0][0];
	if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2] && grid[1][0] != ' ')
		return grid[1][0];
	if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2] && grid[2][0] != ' ')
		return grid[2][0];

	if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0] && grid[0][0] != ' ')
		return grid[0][0];
	if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1] && grid[0][1] != ' ')
		return grid[0][1];
	if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2] && grid[0][2] != ' ')
		return grid[0][2];
	

	if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != ' ')
		return grid[0][0];
	if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != ' ')
		return grid[0][0];
	else
		return ' ';
}

