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
	printf("Assignment #1-4, William Wood, woodw221@gmail.com\n");
	char input[256];
	char *point;
	char *tokens[8];
	int i = 1;
	int x = 1;
	int z = 0;
	/* Prints < and prompts input, reads the input if it is less than or equal to 20
	continue to test number of tokens. If number of tokens is less than 3 then goes to
	token status printer */
	while (x == 1){
	printf("> ");
		while (fgets(input, 256, stdin) != NULL){
			if (strlen(input) <= 21){
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
					break;
				} 
				else{
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
						if( isQuit(tokens[0])){
							exit(0);
						}
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
			else{
				printf("ERROR! Input string too long.\n");
				break;
			}
		}
	}

}

int isTokInt(char *tok ){
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
