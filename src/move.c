#include <stdio.h>    
int move(){
	/*	
	int i;
	int j;
	int x;
	int y;
	char in;
	int screen[x][y];
	
	for(i = 1; i  <= 50; i++){
		for(j = 1; j <= 50; j++){
			screen[j][i] = printf("  ");
			SetColor(230);
		}
		printf("\n");
	}
	SetColor(0);
	*/
	char in;
	int x = 0, y = 0;
	while(1){
		gotoxy(x, y);
		printf("  ");
		if(kbhit()){
			in=getch();
			switch(in){
				case 'w' : y--; break;
				case 'a' : x--;	break;
				case 's' : y++;	break;
				case 'd' : x++;	break;
				case 'W' : y--; break;
				case 'A' : x--; break;
				case 'S' : y++; break;
				case 'D' : x++; break;
				case 72 : y--; break;
				case 75 : x--; break;
				case 80 : y++; break;
				case 77 : x++; break;
			}	

		}
		gotoxy(x, y);
		printf("**");
	}
}
