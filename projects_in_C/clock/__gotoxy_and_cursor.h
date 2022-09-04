
#define gotoxy( b, a ) wprintf(L"%c[%d;%df", 0X1B, b, a);

#define clscrn { wprintf(L"\e[1;1H\e[2J");\
                   gotoxy(1, 1) }

#define hide_cursor wprintf(L"\e[?25l");