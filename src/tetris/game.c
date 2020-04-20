int block_drop(){
	int x = 100;
	int y;
	
	for(y = 3; y < 63; y++){
		gotoxy(x, y);
		SetColor(100);
		printf("  ");
		sleep(1000);
		SetColor(0);	
		printf("  ");
	}
}
