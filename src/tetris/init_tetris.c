int init_tetris()
{
	
	display_clear(0); //화면을 흰색으로 채우는것.
	//right
	display_box_edge(132, 2, 64, 62, 144);		
	display_box_edge(198, 2, 40, 20, 144);	
	display_box_edge(198, 30, 40, 34, 144);
	//left
	display_box_edge(44, 2, 64, 62, 200);		
	display_box_edge(2, 2, 40, 20, 200);	
	display_box_edge(2, 30, 40, 34, 200);
	
	//right
	int right_player_score = 0;
	int right_level = 0;
	int right_line = 0;
	//left
	int left_player_score = 0;
	int left_level = 0;
	int left_line = 0;
	
	//right
	SetColor(144);
	gotoxy(202, 32); printf("SCORE");
	gotoxy(202, 34); printf("%d", right_player_score);
	gotoxy(202, 40); printf("LEVEL");
	gotoxy(202, 42); printf("%d", right_level); 
	gotoxy(202, 48); printf("LINE");
	gotoxy(202, 50); printf("%d", right_line); 
	
	//left
	SetColor(200);
	gotoxy(33, 32); printf("SCORE");
	gotoxy(37, 34); printf("%d", left_player_score);
	gotoxy(33, 40); printf("LEVEL");
	gotoxy(37, 42); printf("%d", left_level); 
	gotoxy(34, 48); printf("LINE");
	gotoxy(37, 50); printf("%d", left_line); 
	
	//vs
	letter_print_char(110, 30, 'V', 200, 0); 
	letter_print_char(120, 30, 'S', 144, 0);
	
}
