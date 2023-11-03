#include <iostream>
#include <string>

#include "CheckerBoard.h"

using namespace std;

int Main()
{


	CheckerBoard checkerBoard;
	checkerBoard.initBoard();
	checkerBoard.printBoard();


	system("PAUSE");
	return 0;
}