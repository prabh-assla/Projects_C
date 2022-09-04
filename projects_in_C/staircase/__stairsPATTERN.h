
#include "__plant.h"

void aqua( int column, int length ){

    printf("\e[0;104m");

    int colum_M = column;

    for(int i=1; i<=length; ++i){

        gotoxy( colum_M, 22 );
        printf("~");

    ++colum_M;

    }

    for(int i=1; i<=length; ++i){

        gotoxy( column, 23 );
        printf("~");

    ++column;

    }

    printf("\e[0m");
}

void stairs( ){

    int zeroth_row = 4;
    int zeroth_column = 8;


    const int length = 3;
    const int height = length-1;
    const int number_of_stairs = 9;

    int i;

    red();

    for(i=1; i<=zeroth_column; ++i){

    gotoxy( i, zeroth_row );
    printf("_");

    }

    i-=2;

    for(int i=1; i<=number_of_stairs; ++i){

       for(int j=1; j<=length; ++j){
           gotoxy( zeroth_column, zeroth_row );

           yellow();
           printf("_");

           ++zeroth_column;
       }

    ++zeroth_row;

        for(int j=1; j<=height; ++j){

           gotoxy( zeroth_column, zeroth_row );

           cyan();
           printf("|");

           ++zeroth_row;
       }

    ++zeroth_column;
    --zeroth_row;

    }

red();

for(int i=1; i<=19; ++i)
printf("_");

aqua( 63, 20 );

plant( 23, 83 );

aqua( 84, 6 );

plant( 23, 90 );

aqua( 91, 6 );

plant( 23, 97 );

aqua( 98, 10 );

purple();

}