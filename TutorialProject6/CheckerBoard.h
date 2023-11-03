#pragma once
#include <string>

using namespace std;

class CheckerBoard
{
public:
	void initBoard();

	void printBoard();
private:
	char board[3][3];
};



