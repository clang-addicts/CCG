#include <windows.h>
#include <stdio.h>

#include "function.c"

#include "display.c"

#include "move.c"


int main(int argc, char **argv)
{	
	move();
	/*
	int in;
	while(1)
	{
		if(kbhit())
		{
			in=getch(); 
			switch(in)
			{
				case 72: update(1); break;
				case 80: update(2); break;
				case 13:{
					switch(MENU_Y){
						case 12: weapon();
						case 15: help();
						case 18: exit(0);
					}
				}
			in = getch();				
			printf("%d\n",in);
			if( in == ASCII_KEY_ESC ) {
				return 0;
			}
		}
	}
	*/
}
