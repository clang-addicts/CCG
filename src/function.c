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

//Sets display to FULLSCREEN (ALT+RETURN)
void display_set_fullscreen()
{
    keybd_event(VK_MENU,  0x38,0,              0);
	keybd_event(VK_RETURN,0x1c,0,              0);
	keybd_event(VK_MENU,  0x38,KEYEVENTF_KEYUP,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
}
