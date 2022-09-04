#include <stdio.h>

#include "__colour.h"

int main(){

    printf("butterfly pattern is below ->\n");

    int k = 1;
    int l;

    cyan();

    for(int i=19; i>0; i-=2){
        
        if( i==19 )
        printf(" ");

        printf("*");

        if( i!=19 ){
            
            for(l=1; l<=k; ++l){

            printf(" ");
            }

            printf("*");
        }

        for(int j=1; j<=i; ++j){
        
            if(i<=6){
                if(j==(i+1)/2){
                yellow();
                printf("o");
                cyan();
                continue;}
            }

        printf(" ");}

        printf("*");

        if( i==19 )
        printf("\n");

        if( i!=19 ){
            
            for(l=1; l<=k; ++l)
            printf(" ");

            printf("*\n");

            ++k;
        }

    }

    cyan();

    printf(" ");

    for(int i=1; i<=l; ++i)
    printf("*");

    yellow();
    printf("o");
    cyan();
 
    for(int i=1; i<=l; ++i)
    printf("*");

    printf("\n");
    
    purple();

    for(int i=1; i<=3; ++i){

        for(int j=1; j<=5; ++j)
        printf(" ");

        printf("|");

        for(int j=1; j<=5; ++j)
        printf(" ");

        yellow();
        printf("o");
        purple();

        for(int j=1; j<=5; ++j)
        printf(" ");

        printf("|\n");

    }

    k=3;

    for(int i=1; i<=3; ++i){
        for(int j=1; j<=5; ++j)
        printf(" ");

        for(int k=1; k<=i; ++k)
        printf(" ");

        printf("*");
        
        if(i != 3){
        for(int l=1; l<=k; ++l)
        printf(" ");

        printf("*");}

        for(int m=1; m<=2*i-1; ++m)
        printf(" ");

        printf("*");

        if(i != 3){
        for(int l=1; l<=k; ++l)
        printf(" ");

        printf("*\n");}

        if( i==3 )
        printf("\n");

    k-=2;
    }


return 0;
}

