void PRINT_pattern(int *NUM, int i){
    char pattern[8][80] = {
    "####      #     ####    ####    #       ####    ####    ####    ####    ####    ",
    "#  #     ##        #       #    # #     #       #  #    #  #    #  #    #  #    ",
    "#  #    # #        #       #    # #     #       #  #    #  #    #  #    #  #    ",
    "#  #      #     ####     ###    ####    ###     #       #  #    ####    ####    ",
    "#  #      #     #          #      #        #    ####       #    #  #       #    ",
    "#  #      #     #          #      #        #    #  #       #    #  #       #    ",
    "#  #      #     #          #      #        #    #  #       #    #  #       #    ",
    "####    ####    ####    ####      #     ###     ####       #    ####    ####    "};

char *ARR = &pattern[0][0];
int j, k, l;

        for(j=0; j<=7; j++){
            for(k=0; k<=i; k++){
                ARR+=8*(*NUM);
                for(l=0; l<=7; l++)
                {printf("%c", *ARR);
                ARR++;}
                ARR-=8*(*NUM)+8;
                NUM++;}

        NUM-=(i+1);
        ARR+=80;
        printf("\n");}
    
}

void charTOint_array(char*lit, int i){
    char range[10] = "0123456789", *litTY = &range[0];
    int sum = 0, j = 0, arr[5];
    while(*lit != '\0' & j<=i){
        while(*litTY != *lit){
            sum++;
            litTY++;
        }
        arr[j] = sum;
        litTY -= sum;
        sum = 0;
        lit++;
        j++;
    }

    PRINT_pattern(arr, 4);
}

int main(){
    char NUM[6] = "78999";
    charTOint_array(NUM, 4);
    return 0;
}