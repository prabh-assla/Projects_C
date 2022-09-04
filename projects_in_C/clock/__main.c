#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>

#include "__declaration.h"
#include "__gotoxy_and_cursor.h"
#include "__colour.h"
#include "__timer.h"

int main(){
    
    declaration();
    hide_cursor

    const clock_t start = clock();

    timer_display( start );

return 0;

}