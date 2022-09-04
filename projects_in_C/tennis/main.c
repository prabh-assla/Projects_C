#include <stdio.h>

#include "__gotoxy.h"
#include "__colour.h"
#include "__cursor.h"

void clscrn(){

    printf("\e[1;1H\e[2J");
    gotoxy(1, 1);
}

void pattern(){

    hide_cursor();

    clscrn();

    int column = 2;
    const int row = 1;
    const long int length = 200000;
    int size = 18;

    while( 1 ){

    while( column<=size ){

    red();

    gotoxy(1,1);
    printf("/");

    yellow();

    gotoxy(size+1,1);
    printf("|");

    reset();

    for(int i=1; i<=length; ++i){

        gotoxy(column, row);
        printf("*");


    }

    clscrn();

    ++column;}

    while( column>=2 ){

    yellow();

    gotoxy(1,1);
    printf("|");

    red();

    gotoxy(size+1,1);
    printf("\\");

    reset();

    for(int i=1; i<length; ++i){

        gotoxy(column, row);
        printf("*");


    }

    clscrn();

    --column;}

    reset();
    
    }

}

int main(){

    pattern();

return 0;
}