#include <stdio.h>

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


}

void display_select_right()
{
	
}

void display_menu(){
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
}
