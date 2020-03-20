#include <stdio.h>
#include <windows.h>

#define ESC 27

int main( int argc, char **argv )
{
int R_NUM;
        srand(time(0));
        
            R_NUM=rand()%100;
            if(R_NUM>-1) printf("%d\n",R_NUM);
        
}
