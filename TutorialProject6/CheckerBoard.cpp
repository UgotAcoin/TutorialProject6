#include "CheckerBoard.h"
#include <iostream>

void CheckerBoard::initBoard() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (((x + y) % 2) == 0) {
				board[y][x] = '.';
			}
			else {
				board[y][x] = '*';
			}
		}
	}
}
void CheckerBoard::printBoard() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << board[y][x];
		}
		cout << endl;
	}
}