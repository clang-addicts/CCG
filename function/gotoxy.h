#ifndef _GOTOXY_H_
#define _GOTOXY_H_

void SetColor(int color) 
{
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);
}

void gotoxy(short X, short Y)
{	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y});
}

#endif	
