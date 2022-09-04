
void jumps_on_stairs( int* row_index, int* column_index, int* layer ){

    const long int length = 200000;

    if( *layer == 1 ){

    for(int j=1; j<=length; ++j){

        gotoxy( *column_index, *row_index );
        
        printf("o");

        }

        --*row_index;
        ++*column_index;
    }

    if( *layer == 2 ){

    for(int j=1; j<=length; ++j){

        gotoxy( *column_index, *row_index );
        
        printf("o");

        }

        ++*column_index;
    }

    if( *layer == 3 ){

    for(int j=1; j<=length; ++j){

        gotoxy( *column_index, *row_index );
        
        printf("o");

        }

        ++*column_index;
        ++*row_index;
    }

    if( *layer == 4 ){

    for(int j=1; j<=length; ++j){

        gotoxy( *column_index, *row_index );
        
        printf("o");

        }

        ++*column_index;
        ++*row_index;
    }

    if( *layer == 5 ){

    for(int j=1; j<=length; ++j){

        gotoxy( *column_index, *row_index );
        
        printf("o");

        }

        ++*row_index;
    }

++*layer;

return;

}

