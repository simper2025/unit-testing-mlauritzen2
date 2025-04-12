#pragma once

class Board
{
private:
	char grid[3][3];

public: 
	Board() : grid{ { ' ',' ',' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } } { }
	void SetBoard(char setup[3][3]);
	char GetSquare(int row, int col) const;
	bool SetSquare(int row, int col, char player);
	char GameStatus(); 
};

