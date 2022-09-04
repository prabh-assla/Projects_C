#include <stdio.h>
#include <stdbool.h>


#include "__gotoxy.h"
#include "__colour.h"


#include "__stairsPATTERN.h"
#include "__initialJUMPS.h"
#include "__JUMPSonSTAIRS.h"
#include "__waterDROPLETS.h"
#include "__cursor.h"

void clscrn(){

    printf("\e[1;1H\e[2J");
    gotoxy(1, 1);
}

int main(){

    hide_cursor();

    bool loop1_death = false;
    bool loop2_death = false;
    bool loop3_death = false;


    const long int length = 200000;


    int row_index = 1, column_index = 1;

    int layer = 1;
    int trimes = 1;

    while( column_index != 64 ){

    clscrn();

    stairs();

if( (row_index != 4 || column_index != 9) && ( !loop1_death ) ){

    initial_entry( &row_index, &column_index, 0, 0 );

    continue;
    
}

loop1_death = true;

if( (row_index != 22 || column_index != 45) && ( !loop2_death ) ){

    jumps_on_stairs( &row_index, &column_index, &layer);


        if( layer == 6 )
        layer-=5;


    continue;
}

loop2_death = true;

if( ( row_index != 22 || column_index != 57 ) && !loop3_death ){

    if( trimes == 1 ){

    for(int j=1; j<=length; ++j){

        gotoxy( column_index, row_index );

        printf("o");
        
    }

        ++column_index;
        --row_index;
    }

    if( trimes == 2 ){

    for(int j=1; j<=length; ++j){

        gotoxy( column_index, row_index );

        printf("o");
        
    }

        ++column_index;
        --row_index;
    }

    if( trimes == 3 ){

    for(int j=1; j<=length; ++j){

        gotoxy( column_index, row_index );

        printf("o");
        
    }

        ++column_index;
        --row_index;
    }

    if( ( trimes >= 4 ) && ( row_index != 22 || column_index != 56 ) )
        initial_entry( &row_index, &column_index, 18, 47 );

    if( ( trimes >= 4 ) && ( row_index == 22 || column_index == 56 ) ){

    for(int j=1; j<=length; ++j){

        gotoxy( column_index, row_index );

        printf("o");
        
    }

        ++column_index;

    }

++trimes;

continue;

}

loop3_death = true;

    if( column_index != 64 ){
    
for(int j=1; j<=length; ++j){

    gotoxy( column_index, row_index );

    printf("o");
    
}

    ++column_index;

    continue;

    }

}

    stairs();


        int instance = 1;

const int row = 22;
const int column = 63;

            while( instance != 6 ){

            clscrn();
        
            stairs();
            
            droplets(row, column, &instance );

            }

    red();

    gotoxy(1, 27);
    printf("the program is finished\n");


return 0;
}
