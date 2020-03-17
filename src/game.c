
int init_snake()
{
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
		printf(" ");
		if(kbhit()){
			in=getch();
			switch(in){
				case 'w' : 
				case 'W' :
				case ASCII_ARROW_UP : y--; break;
				case 'a' :
				case 'A' : 
				case ASCII_ARROW_LEFT : x--; break;
				case 's' :
				case 'S' :
				case ASCII_ARROW_DOWN : y++; break;
				case 'd' : 
				case 'D' : 
				case ASCII_ARROW_RIGHT : x++; break;
			}	

		}
		gotoxy(x, y);
		printf("*");
		cursor(0);
	}
}
