#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* Takes null terminated string. Returns whether or not
 * it is entirely integer characters
 */
int isTokInt(char *tok);

/* Takes null terminated string. Returns whether or not
 * the first string is any variation is quit and returns
 */
int isQuit(char *stop);

void main()
{
	printf("Assignment #1-5, William Wood, woodw221@gmail.com\n");
	char input[256];
	char *point;
	char *tokens[8];
	int i = 1;
	int x = 1;
	int z = 0;

	/* Begins loop with formatting and immediately checks length of input
	 */
	while (x == 1){
		printf("> ");
		while(NULL != fgets(input, 256, stdin)){
			if (strlen(input) <= 66) {
				i = 1;
				z = 0;
				point = strtok(input, "\t\n ");
				/* Counts number of time strtok runs to determine number
				 * of tokens inputted
				 */
				while(point){
					tokens[z] = point;
					i++;
					z++;
					point = strtok(NULL, "\t\n ");
				}
				if (i >= 4 || i == 1){
					printf("ERROR! Incorrect number of tokens found.\n");
					break;
				}
				else{
					/* if i is 3 there are two tokens and proper formatting
					 * checks are run. Breaks back to beginning for new input
					 */
					if( i == 3){
						if( isTokInt(tokens[0])){
							printf("ERROR! Expected STR INT.\n");
							break;
						}
						else{
							if( isTokInt(tokens[1])){
								printf("STR INT\n");
								break;
							}
							else{
								printf("ERROR! Expected STR INT.\n");
								break;
							}
						}
					}
					else{
						/* Checks for just quit, then checks for
						 * STR then displays message and breaks to beginning.
						 */
						if( isQuit(tokens[0])){
							exit(0);
						}
						if( isTokInt(tokens[0])){
							printf("ERROR! Expected STR.\n");
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
			else{
				printf("ERROR! Input string too long.\n");
				break;
			}
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

int isQuit(char *stop ){
	char buffer[66];
	strcpy(buffer, stop);
	for(int i = 0; i <= strlen(stop); i++){
		buffer[i] = tolower(buffer[i]);
	}
	return(!strncmp(buffer, "quit", 4));
}
