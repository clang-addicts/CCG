
void letter_print_char(int posX, int posY, char letter, int fg_color, int bg_color)
{
    int i,j;
    char compare[7];
    char temp[2];
    char file_name[13]="letter\\";
    
    if(letter >= 97) letter-=32;

    temp[0]=letter;
    temp[1]='\0';
    strcat(file_name,temp);
    strcat(file_name,".txt");

    FILE *file_pointer = fopen(file_name,"r");
    for(i=0;i<5;i++) {
        fgets(compare,(size_t)7,file_pointer);
        for(j=0;j<5;j++) {
            gotoxy(posX+(j*2),posY+i);
            if(compare[j]=='0') {
                SetColor(bg_color); printf("  ");
            } else {
                SetColor(fg_color); printf("  ");
            }
        }
    }
}

void letter_print_string(int posX, int posY, const char* input)
{

}