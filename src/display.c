#include <stdio.h>

int display()
{
	gotoxy(1, 1);
	SetColor(240);
	printf("  ");
	SetColor(0);
	cursor(FALSE);
}
