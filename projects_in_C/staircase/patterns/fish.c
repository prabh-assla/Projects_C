#include <stdio.h>

#include "__colour.h"

int main(){

    int i, k, o;

    for(i=1; i<=14; ++i)
    printf(" ");

    red();

    for(k=1; k<=16; ++k)
    printf(">");

    printf("\n");

    int l=i-2, m=k-1, n=11;

    while( l>=0 ){

            for(int j=1; j<=l; ++j)
            printf(" ");

            purple();

            printf("*");

            for(int j=1; j<=m; ++j){

                if( l==3 && j==5  ){
                    yellow();

                    printf("O");
                    continue;
                }

            printf(" ");}

            purple();

            printf("*");

            if( l==3 ){
                
                cyan();

                for(o=1; o<=11; ++o)
                printf("*");

            --o;
            }

            if( l<3 ){

                green();

                for(int p=1; p<o-2; ++p)
                printf(" ");

                printf("*");

            o-=2;
            }

            printf("\n");

            --l;
            m+=2;
    }

    l=1;
    m-=4;

    o+=2;

    while( l<=i-2 ){

        for(int j=1; j<=l; ++j)
        printf(" ");

        purple();

        printf("*");

        for(int j=1; j<=m; ++j)
        printf(" ");

  
        printf("*");

            if( l==3 ){

                cyan();
                
                for(o=1; o<=11; ++o)
                printf("*");

            }

            if( l<3 ){

                green();

                for(int p=1; p<o; ++p)
                printf(" ");

                printf("*");

            o+=2;
            }

            printf("\n");

        ++l;
        m-=2;
    }

    for(int j=1; j<=l; ++j)
    printf(" ");

    red();

    for(int j=2; j<=k; ++j)
    printf(">");

    printf("\n");

return 0;
}