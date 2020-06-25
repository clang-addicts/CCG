#ifndef _GOTOXY_H_
#define _GOTOXY_H_

#define <windows.h> /* calling Mircosoft Console API */

/*
    CONSOLE_SET_COLOR( (int)0~255 )
    return : 
        0 = fail
        !0 = success
*/
#define CONSOLE_SET_COLOR(clr) (SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),clr))

/*
    CONSOLE_SET_CPOS(X,Y)
    return : 
        0 = fail
        !0 = success
*/
#define CONSOLE_SET_CPOS(X,Y) (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y}))
	
#endif	
