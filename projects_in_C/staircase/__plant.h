
void plant( int row, int column ){

green();

    int x = row, y = column;

    for( int i = 1; i <= 6; ++i ){
        gotoxy( y, x );
        printf("|");

        --x;
    }

    gotoxy( column-1, row-4 );
    printf("\\");
    gotoxy( column-1, row-3 );
    printf("/");

    gotoxy( column+1, row-3 );
    printf("\\");
    gotoxy( column+1, row-4 );
    printf("/");

    printf("\e[0;101m");
    gotoxy( column-2, row-5 );
    printf("*");
    printf("\e[0;105m");
    gotoxy( column-2, row-2 );
    printf("*");

    gotoxy( column+2, row-5 );
    printf("*");
    printf("\e[0;101m");
    gotoxy( column+2, row-2 );
    printf("*");

    printf("\e[0;106m");
    gotoxy( column, row-6 );
    printf("*");

printf("\e[0m");

gotoxy(45, 45);
printf("o");

}