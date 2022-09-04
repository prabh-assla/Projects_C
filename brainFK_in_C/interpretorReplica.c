#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define PLUS '+'
#define MINUS '-'
#define COMMA ','
#define DOT '.'
#define LEFT '<'
#define RIGHT '>'
#define SQLEFT '['
#define SQRIGHT ']'

int main( int argc, char * argv[] ){
	
	int input[30000];

	for(int i=0; i<30000; ++i)
	input[i] = 0;

	FILE * fptr = fopen( argv[2], "rb" );

	int pos = 0;
	char cmd = '\0';
	int start = 0, close = 0, steps = 0;

	bool loopopen = false;

	while( cmd!='\377' && pos!=30000  ){
		
	       	cmd = fgetc( fptr );	
	
		switch( cmd ){

			case PLUS :

				++input[pos];
			
			break;

			case MINUS :

				--input[pos];

			break;

			case COMMA :

				scanf("%d", &input[pos]);

			break;

			case DOT :

				printf("%c", input[pos]);

			break;

			case LEFT :

				if( pos )
					--pos;

			break;

			case RIGHT :

				++pos;

			break;

			case SQLEFT :
                        
				loopopen = true;

				start = steps+1;
			
			break;

			case SQRIGHT :
			
			if( !input[pos] && loopopen ){
				loopopen = false;

				start = 0;
				close = 0;
			}

			if( input[pos] && loopopen ){
				fseek( fptr, start, SEEK_SET );

				steps = start;

                continue;
			}

			break;

			default :

			break;
		
		}
		
	++steps;

	}

	fclose( fptr );

	return 0;
}