#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#include "setting.h"

#include "function.c"

#include "letter.c"
#include "display.c"
#include "move.c"

void init() 
{
	display_set_screen_size(DISPLAY_SIZE_X,DISPLAY_SIZE_Y);
	cursor(FALSE);
}


void de_init()
{
	return ;
}

void quit_program()
{
	de_init();
	exit(0);
}

int main(int argc, char **argv)
{	

	int user_input = 0;
	int user_selection = 0;

//	init();
//	display_menu();
	
//	while(1)
//	{
//		if( kbhit() )
//		{
//			user_input = getch();
//			switch( user_input )
//			{
//				case ASCII_ESC: 
//				{
//					quit_program();
//				}
//				
//				case ASCII_ENTER:
//				{
//					switch( user_selection )
//					{
//						case 0:
//						{
//							// START GAME
//							//init_snake();
//							break;
//						}
//						case 1:
//						{
//							// END GAME
//							quit_program();
//							break;
//						}
//					}
//				} 
//				// SELECTIONS
//				case 'w':
//				case 'W':
//				//case ASCII_ARROW_UP:
//				{
//					user_selection = 0;
//					display_select_up();
//					break;
//				}
//				/*
//				case ASCII_A:
//				case ASCII_a:
//				case ASCII_ARROW_LEFT:
//				{
//					display_select_left();
//					break;
//				} */				
//				case 's':
//				case 'S':
//			//	case ASCII_ARROW_DOWN:
//				{
//					user_selection = 1;
//				    display_select_down();
//					break;
//				} 
//		/*		case ASCII_D:
//				case ASCII_d:
//				case ASCII_ARROW_RIGHT:
//				{
//					display_select_right();
//					break;
//				}	*/	
//			}
//		}
//	}

	move();

	return 0;
}
