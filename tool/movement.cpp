#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(short X, short Y)
{	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){X,Y});
}

int main(){
	int x = 1, y = 1;
    char ch;
    int ar;
    
    gotoxy(x, y);
    
    printf(" ");
    
    while(1){
    	if(kbhit()){
			ch = getch();
			ar = getch();
			gotoxy(x, y);
			printf(" ");
			
			switch(ch){
				case 'W': 
				case 'w': 
					y--; break;
				case 'A': 
				case 'a': 
					x--; break;
				case 'S': 
				case 's':
					y++; break;
				case 'D':	
				case 'd':
					x++; break;
			}
			gotoxy(x, y);
			printf("@");	
		
		}
		
	}	
}

