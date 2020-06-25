#include <stdio.h>
#include <windows.h>

#include "gotoxy.c"

int main (){
	int posX, posY;
	
	while(1){
		SetColor(1);
		gotoxy(0, 0);
		printf("choose position : ");
		gotoxy(18, 0);
		scanf("%d %d", &posX, &posY);
		gotoxy(posX, posY);
		SetColor(200);
		printf("  ");
		gotoxy(18, 0);
	}
}

