void initial_entry( int* row_index, int* column_index, int subtract_row, int subtract_column ){

    const long int length = 200000;

    const int row_WY = *row_index - subtract_row;
    const int column_WY = *column_index - subtract_column;

    if( ( row_WY == 1 ) && ( column_WY == 1 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;

        return;
    }

    if( ( row_WY == 1 ) && ( column_WY == 2 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        ++*row_index;
        
        return;
    }

    if( ( row_WY == 2 ) && ( column_WY == 3 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        ++*row_index;
        
        return;
    }

    if( ( row_WY == 3 ) && ( column_WY == 4 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        ++*row_index;
        
        return;
    }

    if( ( row_WY == 4 ) && ( column_WY == 5 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        --*row_index;
        
        return;
    }

    if( ( row_WY == 3 ) && ( column_WY == 6 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        --*row_index;
        
        return;
    }

    if( ( row_WY == 2 ) && ( column_WY == 7 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        
        return;
    }

    if( ( row_WY == 2 ) && ( column_WY == 8 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");
        }

        ++*column_index;
        ++*row_index;
        
        return;
    }

    if( ( row_WY == 3 ) && ( column_WY == 9 ) ){

        for(int j=1; j<=length; ++j){

            gotoxy( *column_index, *row_index );
        
            printf("o");

        }

        ++*row_index;

        return;
    }

return;
}

