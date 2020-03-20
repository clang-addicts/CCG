void display_set_screen_size(int X, int Y)
{
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y});
}

void display_clear(int color)
{
	int i;
	char output[DISPLAY_SIZE_X];
	
	for(i=0;i<DISPLAY_SIZE_X;i++) {
		output[i]=' ';
	}
	output[i]='\0';
	
	SetColor(color);
	for(i=0;i<DISPLAY_SIZE_Y;i++) {
		gotoxy(0,i); printf("%s",output);
	}
	
}

void display_box_full(int posX, int posY, int sizeX, int sizeY, int color)
{
	int i;
	char output[sizeX];

	for(i=0;i<sizeX;i++) {
		output[i]=' ';
	}
	output[i]='\0';
	
	SetColor(color);
	for(i=posY;i<(posY+sizeY);i++) {
		gotoxy(posX,i); printf("%s",output);
	}
}

void display_menu(){

	display_clear(240);
	
	display_box_full(20,4,80,10,144);
	display_box_full(24,15,72,5,200);
	display_box_full(24,21,72,5,144);
	
	letter_print_char(33,6,'S',192,144);
	letter_print_char(44,6,'N',192,144);
	letter_print_char(55,6,'A',192,144);
	letter_print_char(66,6,'K',192,144);
	letter_print_char(77,6,'E',192,144);

	SetColor(200);
	gotoxy(55, 17); printf("start game");
	SetColor(144);
	gotoxy(55, 23);	printf("end program");

}

void display_selection_change(int menu_selection){
	if(menu_selection == 0)
	{
		display_box_full(24,15,72,5,200);
		display_box_full(24,21,72,5,144);
		
		SetColor(200);
		gotoxy(55, 17); printf("start game");
		SetColor(144);
		gotoxy(55, 23);	printf("end program");
		
	}
	else if(menu_selection == 1)
	{
		display_box_full(24,15,72,5,144);
		display_box_full(24,21,72,5,200);

		SetColor(144);
		gotoxy(55, 17); printf("start game");
		SetColor(200);
		gotoxy(55, 23);	printf("end program");
	}
}

void display_play_box(){
	display_box_full(10, 0, 100, 30, 200);
	display_box_full(11, 1, 98, 28, 0);
}
