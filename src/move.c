#include <stdio.h>    

int move(){
	
	int i;
	int j;
	int x;
	int y;
	char in;
	int screen[x][y];
	
	for(i = 1; i <= 50; i++){
		for(j = 1; j <= 50; j++){
			screen[j][i];
			SetColor(230);
			printf("  ");
		}
		printf("\n");
	}
	Setcolor(0);
	
	while(1){
		if (kbhit()){
			in = getch();
			switch(in){
				case 'W' : screen[x][y+ 1] == '.'; printf("%c", screen[x][y+ 1]); break;
				case 'S' : screen[x][y- 1] == '.'; printf("%c", screen[x][y- 1]); break;
				case 'A' : screen[x- 1][y] == '.'; printf("%c", screen[x-1][y] ); break;
				case 'D' : screen[x+ 1][y] == '.'; printf("%c", screen[x+ 1][y]); break; 
			}
		}
	}
	cursor(FALSE);
}
