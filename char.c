#include <stdio.h>

char printChar (void){
	char symbol;
		for(short i = -128; i < 128; i++){
			symbol = i;
			printf("%c ", symbol);
		}
	printf("\n");	
	return 0;
}

void main(void)
{
	printChar();
	return;
}