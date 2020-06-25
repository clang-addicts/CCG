#include <stdio.h>
#include <windows.h>

#include "gotoxy.c"
#include "gotoxy.h"

int main (){
	int POS_X, POS_Y;
	
	while(1){
		SetColor(1);
		gotoxy(0, 0);
		printf("choose position : ");
		gotoxy(18, 0);
		scanf("%d %d", &POS_X, &POS_Y);
		gotoxy(POS_X, POS_Y);
		SetColor(200);
		printf("  ");
		gotoxy(18, 0);
	}
}

