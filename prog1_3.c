#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* Takes null terminated string. Returns whether or not
 * it is entirely integer characters
 */
int isTokInt(char *tok);


void main()
{
	printf("Assignment #1-3, William Wood, woodw221@gmail.com\n");
	char input[66];
	char *point;
	char *tokens[8];
	int i = 1;
	int x = 1;
	int y = 1;
	int z = 0;

	/* Counts number of time strtok runs to determine number
	 * of tokens inputted
	 */
	while (x == 1){
		printf("> ");
		fgets(input, 66, stdin);
		i = 1;
		z = 0;
		char *test = input;
		point = strtok(input, "\t\n ");
		while(point){
			tokens[z] = point;
			i++;
			z++;
			point = strtok(NULL, "\t\n ");
		}
		if (i >= 4 || i == 1){
			printf("ERROR! Incorrect number of tokens found.\n");
			continue;
		} 
		else{
			/* if i is 3 there are two tokens and proper formatting
			 * checks are run. Breaks to end program
			 */
			if( i == 3){
				if( isTokInt(tokens[0])){
					printf("INT ");
				}
				else{
					printf("STR ");
				}
				if( isTokInt(tokens[1])){
					printf("INT\n");
					break;
				}
				else{
					printf("STR\n");
					break;
				}
			}
			else{
				/* if i is 3 there are two tokens and proper formatting
				 * checks are run. Breaks to end program
				 */
				if( isTokInt(tokens[0])){
					printf("INT\n");
					break;
				}
				else{
					printf("STR\n");
					break;
				}
			}
			break;
		}
	}
}

int isTokInt(char *tok){
	while(*tok != '\0'){
		if(!isdigit(*tok++)){
			return 0;
		}
	}
	return 1;
}
