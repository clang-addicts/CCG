#include <stdio.h>
#include <windows.h>

#include "gotoxy.h"

void gotoxy(short POS_X, short POS_Y)
{	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y});
}

