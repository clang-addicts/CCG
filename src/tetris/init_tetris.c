int init_tetris()
{
	
	display_clear(0); //화면을 흰색으로 채우는것.
	//right
	display_box_edge(130, 2, 64, 62, 240);		
	display_box_edge(196, 2, 40, 20, 240);	
	display_box_edge(196, 30, 40, 34, 240);
	//left
	display_box_edge(46, 2, 64, 62, 240);		
	display_box_edge(4, 2, 40, 20, 240);	
	display_box_edge(4, 30, 40, 34, 240);
	
	//right
	int right_player_score = 0;
	int right_level = 0;
	int right_line = 0;
	//left
	int left_player_score = 0;
	int left_level = 0;
	int left_line = 0;
	
	//right
	gotoxy(199, 32); printf("SCORE");
	gotoxy(199, 34); printf("%d", right_player_score);
	gotoxy(199, 40); printf("LEVEL");
	gotoxy(199, 42); printf("%d", right_level); 
	gotoxy(199, 48); printf("LINE");
	gotoxy(199, 50); printf("%d", right_line); 
	
	//left
	gotoxy(7, 32); printf("SCORE");
	gotoxy(7, 34); printf("%d", left_player_score);
	gotoxy(7, 40); printf("LEVEL");
	gotoxy(7, 42); printf("%d", left_level); 
	gotoxy(7, 48); printf("LINE");
	gotoxy(7, 50); printf("%d", left_line); 
	
	//vs
	letter_print_char(110, 30, 'V', 200, 0); 
	letter_print_char(120, 30, 'S', 144, 0);
	
}
