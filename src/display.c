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
	display_box_full(24,15,72,5,144);
	display_box_full(24,21,72,5,144);
	
	letter_print_char(33,6,'S',192,144);
	letter_print_char(44,6,'N',192,144);
	letter_print_char(55,6,'A',192,144);
	letter_print_char(66,6,'K',192,144);
	letter_print_char(77,6,'E',192,144);
	
	SetColor(144);
	gotoxy(55, 17); printf("start game");
	SetColor(144);
	gotoxy(55, 23);	printf("end program");

}

void display_select_up(){

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

void display_select_down(){
	
	display_clear(240);
	
	display_box_full(20,4,80,10,144);
	display_box_full(24,15,72,5,144);
	display_box_full(24,21,72,5,200);
	
	letter_print_char(33,6,'S',192,144);
	letter_print_char(44,6,'N',192,144);
	letter_print_char(55,6,'A',192,144);
	letter_print_char(66,6,'K',192,144);
	letter_print_char(77,6,'E',192,144);
	
	SetColor(144);
	gotoxy(55, 17); printf("start game");
	SetColor(200);
	gotoxy(55, 23);	printf("end program");
	
}

int display()
{
	int i;
	gotoxy(8, 1);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("                                                                                                         ");//50
		printf("\n");
		SetColor(0);
		printf("        ");
	}
	SetColor(230);
	printf("                                          {SNAKE on the DESERT}                                          ");//50
	for(i = 1; i <= 13; i++){
		printf("\n");
		SetColor(0);
		printf("        ");
		SetColor(230);
		printf("                                                                                                         ");//50
	}
		printf("\n");
	SetColor(0);
	printf("        ");
	SetColor(220);
	printf("        |        |        |        |      Move : arrow button    |        |        |        |        |   ");//50
		printf("\n");
	SetColor(0);
	printf("        ");
	SetColor(220);
	printf("        |        |        |        |                             |        |        |        |        |   ");
		printf("\n");
	SetColor(0);
	printf("        ");
		SetColor(220);
	printf("        |        |        |        |      Play : P button        |        |        |        |        |   ");//50
		printf("\n");
	SetColor(0);
	printf("        ");
		SetColor(220);
	printf("        |        |        |        |                             |        |        |        |        |   ");
		printf("\n");
	SetColor(0);
	printf("        ");
		SetColor(220);
	printf("        |        |        |        |      End : ESC button       |        |        |        |        |   ");//50
	for(i = 1; i <= 5; i++){
		printf("\n");
		SetColor(0);
		printf("        ");
		SetColor(220);
		printf("        |        |        |        |                             |        |        |        |        |   ");//50
	}

	SetColor(0);
	cursor(FALSE);
}

void display_select_left()
{
	int i;
	char a[6] = "start";
	char b[6] = "end";
	int x = 1, y = 1;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("                                                                                                      ");
		gotoxy(x, y++);
		SetColor(0);
		printf("        ");
	}
	SetColor(230);
	printf("                                          {SNAKE on the DESERT}                                       ");
	gotoxy(x, y++);
	SetColor(0);
	printf("        ");
	for(i = 1; i <= 7; i++){
		SetColor(230);
		printf("                                                                                                      ");
		gotoxy(x, y++);
		SetColor(0);
		printf("        ");
	}
	x = 5; 
	y = 15;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}
		SetColor(230);
		printf("     %s     ", a);
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}
	SetColor(200);
	printf("               ");
	SetColor(0);
	x = 74;
	y = 15;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}	
		SetColor(230);
		printf("      %s      ", b);
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}					
}

void display_select_right()
{
	int i;
	char a[6] = "start";
	char b[6] = "end";
	int x = 1, y = 1;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("                                                                                                      ");
		gotoxy(x, y++);
		SetColor(0);
		printf("        ");
	}
	SetColor(230);
	printf("                                          {SNAKE on the DESERT}                                       ");
	gotoxy(x, y++);
	SetColor(0);
	printf("        ");
	for(i = 1; i <= 7; i++){
		SetColor(230);
		printf("                                                                                                      ");
		gotoxy(x, y++);
		SetColor(0);
		printf("        ");
	}
	x = 5; 
	y = 15;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}
		SetColor(230);
		printf("     %s     ", a);
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}
	x = 74;
	y = 15;
	gotoxy(x, y);
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}	
		SetColor(230);
		printf("      %s      ", b);
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	for(i = 1; i <= 4; i++){
		SetColor(230);
		printf("               ");
		SetColor(0);
		gotoxy(x, y++);
		printf("             ");
	}
	SetColor(200);
	printf("               ");
	SetColor(0);
}
