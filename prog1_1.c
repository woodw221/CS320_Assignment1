#include <stdio.h>
#include <string.h>

void main ()
{
	printf("Assignment #1-1, William Wood, woodw221@gmail.com\n");
	char input[66];
	char *point;
	//Gets input and breaks into multiple tokens
	fgets(input, 66, stdin);
	point = strtok(input, "\t\n ");
	//Prints each token created
	while(point!=NULL){
		printf("=%s=\n",point);
		point = strtok(NULL, "\t\n ");
	}
}
