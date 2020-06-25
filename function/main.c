#include <stdio.h>
#include "window_c_console_api.h"

// by : ashz, gggyjw
// reason : testing codes for window_c_console_api.h

/*
    CONSOLE_SET_CPOS
    CONSOLE_SET_COLOR
*/
int main(int argc, char **argv){
    
    int inputX, inputY;
	while(1)
    {
		// set default text color
        CONSOLE_SET_COLOR(15);
		
        // get user input of coordinates
        CONSOLE_SET_CPOS(0, 0); printf("Position X Value : ");
        scanf("%d",&inputX);
		CONSOLE_SET_CPOS(0, 1); printf("Position Y Value : ");
		scanf("%d",&inputY);
		CONSOLE_SET_CPOS(inputX,inputY);

        // set background color of coordinate
		CONSOLE_SET_COLOR(200);
		printf("  ");
	}
    return 0;
}

