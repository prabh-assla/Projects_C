
//colors

#define red wprintf((L"\e[1;91m"));

#define cyan wprintf(L"\e[1;96m");

#define yellow wprintf(L"\e[1;93m");

#define purple wprintf(L"\e[1;95m");

#define green wprintf(L"\e[1;92m");

#define blue wprintf(L"\e[1;94m");

#define white wprintf(L"\e[1;97m");

//bckgrnd colors


#define black_bckgrnd wprintf(L"\e[0;100m");

#define red_bckgrnd wprintf(L"\e[0;101m");

#define green_bckgrnd wprintf(L"\e[0;102m");

#define yellow_bckgrnd wprintf(L"\e[0;103m");

#define blue_bckgrnd wprintf(L"\e[0;104m");

#define purple_bckgrnd wprintf(L"\e[0;105m");

#define cyan_bckgrnd wprintf(L"\e[0;106m");

#define white_bckgrnd wprintf(L"\e[0;107m");

//reset everything to default

#define reset wprintf(L"\e[0m");