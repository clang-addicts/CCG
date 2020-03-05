#include <stdio.h>
#include <windows.h>

#define ESC 27

int main( int argc, char **argv )
{
	int input;
	while(1)
	{
		if(kbhit())
		{
			input = getch(); 
			printf("%d\n",input);
			if(input == ESC) break;
		}
	}
}
