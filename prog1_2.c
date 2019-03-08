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
	printf("Assignment #1-2, William Wood, woodw221@gmail.com\n");
	char input[66];
	char *point;
	char check[66];
	//Format and read input
	printf("> ");
	fgets(input, 66, stdin);
	point = strtok(input, "\t\n ");
	/*Check the first portion of each token to determine if its a INT or STR
	and prints the result */
	while(point!=NULL){
		if( isTokInt(point)){
			printf("INT ");
		}
		else{
			printf("STR ");
		}
		point = strtok(NULL, "\t\n ");
	}


	//Formatting
	printf("\n");
}

int isTokInt(char *tok){
	while(*tok){
		if(!isdigit(*tok++)){
			return 0;
		}
	}
	return 1;
}
