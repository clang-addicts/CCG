
#include <windows.h>

//Changes the mouse position to the designated cordinates
void gotoxy(short X, short Y)
{	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y});
}
//Hides the visability of the cursor
void cursor(BOOL input)
{
    CONSOLE_CURSOR_INFO pos;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &pos);
    pos.bVisible = input;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &pos);
}

//Sets the text color (0~255)
void SetColor(int color) 
{
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);
}
