
void blue_background(){

    printf("\e[0;104m");
}

void RESET_(){

    printf("\e[0m");
}

void droplets( int row, int column, int *layer ){

    blue();

    const int length = 50000;

    if( *layer == 1 ){

        for(int i=0; i<=length; ++i){

        blue_background();

        gotoxy( column-1, row );
        printf("_");

        RESET_();

        gotoxy( column-1, row-1 );
        printf(".");

        gotoxy( column-1, row-2 );
        printf(".");

        gotoxy( column, row-2 );
        printf(".");

        gotoxy( column+1, row-2 );
        printf(".");

        gotoxy( column+2, row-1 );
        printf(".");

    }

}

    if( *layer == 2 ){

        for(int i=1; i<=length; ++i){

        blue_background();

        gotoxy( column-1, row );
        printf("_");

        RESET_();

        gotoxy( column-3, row-1 );
        printf(".");

        gotoxy( column-3, row-3 );
        printf(".");

        gotoxy( column-4, row-2 );
        printf(".");

        gotoxy( column, row-1 );
        printf(".");

        gotoxy( column+1, row-1 );
        printf(".");

        gotoxy( column+2, row );
        printf(".");

    }

}


    if( *layer == 3 ){

        for(int i=1; i<=length; ++i){

        blue_background();

        gotoxy( column-1, row );
        printf("_");

        gotoxy( column-3, row );
        printf("_");

        gotoxy( column-6, row );
        printf("_");

        RESET_();

        blue();

        gotoxy( column-6, row-2 );
        printf(".");

        gotoxy( column-7, row-3 );
        printf(".");

        gotoxy( column-8, row-1 );
        printf(".");

    }

}

    if( *layer == 4 ){

        for(int i=1; i<=length; ++i){

        blue_background();

        gotoxy( column-1, row );
        printf("_");

        gotoxy( column-3, row );
        printf("_");

        gotoxy( column-6, row );
        printf("_");

        gotoxy( column-9, row );
        printf("_");

        RESET_();

        blue();

        gotoxy( column-6, row-1 );
        printf(".");

        gotoxy( column-7, row-2 );
        printf(".");

        gotoxy( column-3, row-1 );
        printf(".");

    }
 
}


    if( *layer == 5 ){

        for(int i=1; i<=length; ++i){

        blue_background();

        gotoxy( column-1, row );
        printf("_");

        gotoxy( column-2, row );
        printf("_");

        gotoxy( column-3, row );
        printf("_");

        gotoxy( column-6, row );
        printf("_");

        gotoxy( column-7, row );
        printf("_");

        gotoxy( column-9, row );
        printf("_");

    }

}

++*layer;

RESET_();

return;

}