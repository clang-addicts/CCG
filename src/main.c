#include <windows.h>
#include <stdio.h>

#include "setting.h"

#include "function.c"

#include "display.c"
#include "move.c"

int main(int argc, char **argv)
{	
	int user_input = 0;
	int user_selection = 0;

	//init_variable();
	//display_menu();

	while(1)
	{
		if( kbhit() )
		{
			user_input = getch();
			switch( user_input )
			{
				case ASCII_ESC: 
				{
					quit_program();
				}
				case ASCII_ENTER:
				{
					switch( user_selection )
					{
						case 0:
						{
							// START GAME
							init_snake();
							break;
						}
						case 1:
						{
							// END GAME
							quit_program();
							break;
						}
					}
				}
				// SELECTIONS
				case ASCII_W:
				case ASCII_w:
				case ASCII_ARROW_UP:
				{
					//display_select_up();
					break;
				}
				case ASCII_A:
				case ASCII_a:
				case ASCII_ARROW_LEFT:
				{
					display_select_left();
					break;
				}
				case ASCII_S:
				case ASCII_s:
				case ASCII_ARROW_DOWN:
				{
					// displau_select_down();
					break;
				}
				case ASCII_D:
				case ASCII_d:
				case ASCII_ARROW_RIGHT:
				{
					display_select_right();
					break;
				}
			}
		}
	}

	move();
	return 0;
}
