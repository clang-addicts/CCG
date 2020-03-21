
int player_score = 0;
static int player_pos_x;
static int player_pos_y;
static int map_snake[MAP_SIZE_Y_SNAKE][MAP_SIZE_X_SNAKE];

void create_food()
{
	srand(time(0));
	int tmpX = (rand()%(MAP_SIZE_X_SNAKE-2))+1;
	int tmpY = (rand()%(MAP_SIZE_Y_SNAKE-2))+1;
	while(1) {
		if(map_snake[tmpY][tmpX]==0) {
			map_snake[tmpY][tmpX]=-2;
			break;
		}
		tmpX = (rand()%(MAP_SIZE_X_SNAKE-2))+1;
		if(map_snake[tmpY][tmpX]==0) {
			map_snake[tmpY][tmpX]=-2;
			break;
		}
		tmpY = (rand()%(MAP_SIZE_Y_SNAKE-2))+1;
	}
	SetColor(208);
	gotoxy(tmpX*2,tmpY); printf("  ");
}

void player_clear()
{
	int LOOPI=0;
	int LOOPX;
	int LOOPY;
	int TMPX=player_pos_x;
	int TMPY=player_pos_y;
	while(1) {
		SetColor(240);
		gotoxy(TMPX*2,TMPY); printf("  ");
		if(LOOPI>=player_score) break;
		LOOPI++;
		
		for(LOOPY=-1;LOOPY<=1;LOOPY++) {
			for(LOOPX=-1;LOOPX<=1;LOOPX++) {
				if(LOOPY == 0 && LOOPX == 0) continue;
				if(map_snake[LOOPY][LOOPX] == LOOPI+1) {
					TMPX+=LOOPX;
					TMPY+=LOOPY;
				}
			}
		}
	}
}

void player_print() 
{
	int LOOPI=0;
	int LOOPX;
	int LOOPY;
	int TMPX=player_pos_x;
	int TMPY=player_pos_y;

	while(1)
	{
		SetColor(PLAYER_COLOR_SNAKE);
		gotoxy(TMPX*2,TMPY); printf("  ");
		if(LOOPI>=player_score) break;
		LOOPI++;
		
		for(LOOPY=-1;LOOPY<=1;LOOPY++) {
			for(LOOPX=-1;LOOPX<=1;LOOPX++) {
				if(LOOPY == 0 && LOOPX == 0) continue;
				if(map_snake[LOOPY][LOOPX] == LOOPI+1) {
					TMPX+=LOOPX;
					TMPY+=LOOPY;
				}
			}
		}
	}
}

void player_get_input()
{
	while(1){
		if(kbhit()){
			switch(getch()){
				case ASCII_ARROW_UP:{
					if(map_snake[player_pos_y-1][player_pos_x] == 0){
						player_clear();
						player_pos_y--;
						player_print();
					}
					else if(map_snake[player_pos_y-1][player_pos_x] == -2){
						player_clear();
						player_pos_y--;
						player_print();
						create_food();
					}
					break;
				}
				case ASCII_ARROW_DOWN:{
					if(map_snake[player_pos_y+1][player_pos_x] == 0){
						player_clear();
						player_pos_y++;
						player_print();
					}
					else if(map_snake[player_pos_y+1][player_pos_x] == -2){
						player_clear();
						player_pos_y++;
						player_print();
						create_food();
					}
					break;
				}
				case ASCII_ARROW_LEFT:{
					if(map_snake[player_pos_y][player_pos_x-1] == 0){
						player_clear();
						player_pos_x--;
						player_print();
					}
					else if(map_snake[player_pos_y][player_pos_x-1] == -2){
						player_clear();
						player_pos_x--;
						player_print();
						create_food();
					}
					break;
				}
				case ASCII_ARROW_RIGHT:{
					if(map_snake[player_pos_y][player_pos_x+1] == 0){
						player_clear();
						player_pos_x++;
						player_print();
					}
					else if(map_snake[player_pos_y][player_pos_x+1] == -2){
						player_clear();
						player_pos_x++;
						player_print();
						create_food();
					}
					break;
				}
				case ASCII_ESC:{
					quit_program();
					break;
				}
			}
		}
	}
}

int init_snake()
{
	int LOOPX;
	int LOOPY;

	display_clear(240);
	display_box_edge(0,0,MAP_SIZE_X_SNAKE*2,MAP_SIZE_Y_SNAKE,0);

	SetColor(240); 
	gotoxy(6,MAP_SIZE_Y_SNAKE+3); printf("          Score           ",player_score);
	gotoxy(6,MAP_SIZE_Y_SNAKE+4); printf("[           %-5d          ]",player_score);
	
	for(LOOPY=0;LOOPY<MAP_SIZE_Y_SNAKE;LOOPY++) {
		for(LOOPX=0;LOOPX<MAP_SIZE_X_SNAKE;LOOPX++) {
			if(LOOPY == 0 || LOOPX == 0 || LOOPY == MAP_SIZE_Y_SNAKE-1 || LOOPX == MAP_SIZE_X_SNAKE-1) map_snake[LOOPY][LOOPX] = -1;
			else map_snake[LOOPY][LOOPX] = 0;
		}
	}

	player_pos_x = (MAP_SIZE_X_SNAKE/2);
	player_pos_y = (MAP_SIZE_Y_SNAKE/2);
	map_snake[player_pos_y][player_pos_x] = 1;

	player_print();
	create_food();
	player_get_input();

}
