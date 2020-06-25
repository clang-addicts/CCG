#include <stdio.h>
#include <windows.h>

#include "gotoxy.h"

int main (){
	int x, y;
	
	while(1){
		SetColor(1);
		gotoxy(0, 0);
		printf("choose position : ");
		gotoxy(18, 0);
		scanf("%d %d", &x	, y);
		gotoxy(x, y);
		SetColor(200);
		printf("  ");
		gotoxy(18, 0);
	}
}

