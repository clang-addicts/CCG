
int player_score = 0;
static int player_x = 30;
static int player_y = 30;

int init_snake()
{
	display_clear(240);
	display_box_edge(0,0,DISPLAY_SIZE_X,DISPLAY_SIZE_Y-10,0);

	SetColor(240); 
	gotoxy(6,DISPLAY_SIZE_Y-6); printf("          Score           ",player_score);
	gotoxy(6,DISPLAY_SIZE_Y-5); printf("[           %-5d          ]",player_score);
	
	while(1){
		if(kbhit()){
			break;
		}
	}



	// int i;
	// char in;
	// int px = 1, py = 1;
	// int x = 0, y = 0;
	// int p = 0;
	// char player;
	// int R_NUM_X, R_NUM_Y;
	// 		SetColor(4);
	// 	        srand(time(0));
	// 	            R_NUM_X=rand()%100;
	// 	            R_NUM_Y=rand()%30;
	// 	            if(R_NUM_X>9) 
	// 					if(R_NUM_Y>-1)
	// 						gotoxy(R_NUM_X, R_NUM_Y);
	// 						printf("+"); 
	// while(1){
	// 	SetColor(7);
	// 	gotoxy(px, py);
	// 	printf("����");
	// 	gotoxy(px, py+3);
	// 	printf("%d", p);
	// 	SetColor(0);
		
	// 	if(kbhit()){
	// 		SetColor(0); gotoxy(x, y); printf(" ");
	// 		in=getch();
	// 		switch(in){
	// 			case 'w' :
	// 			case 'W' :
	// 			case ASCII_ARROW_UP : y--; break;
	// 			case 'a' :
	// 			case 'A' : 
	// 			case ASCII_ARROW_LEFT : x--; break;
	// 			case 's' :
	// 			case 'S' :
	// 			case ASCII_ARROW_DOWN : y++; break;
	// 			case 'd' : 
	// 			case 'D' : 
	// 			case ASCII_ARROW_RIGHT : x++; break;
	// 		}	
	// 		SetColor(1); gotoxy(x, y); printf("*");
	// 	}
	// 	if (x == R_NUM_X && y == R_NUM_Y){
	// 		SetColor(4);
	// 	        srand(time(0));
	// 	            R_NUM_X=rand()%100 + 10;
	// 	            R_NUM_Y=rand()%30 + 0;
	// 				gotoxy(R_NUM_X, R_NUM_Y);
	// 				printf("+"); 
	// 		p += 1;
	// 		player++;
	// 	}
	// }

}
