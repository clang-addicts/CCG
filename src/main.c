#include <windows.h>
#include <stdio.h>

#include "function.c"

#include "display.c"

#define ASCII_KEY_ESC 27

int main(int argc, char **argv)
{
	display();	
	int in;
	while(1)
	{
		if(kbhit())
		{
			in = getch();				
			printf("%d\n",in);
			if( in == ASCII_KEY_ESC ) {
				return 0;
			}
		}
	}
}
