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
