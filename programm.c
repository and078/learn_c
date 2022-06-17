#include <stdio.h>


void main(void)
{
	char one = 1;
	char two = 2;
	char three = 3;
	char four = 4;
	char five = 5;

	printf("%d\n", one);

	char* onePointer = NULL;
	char* twoPointer = NULL;
	char* threePointer = NULL;
	char* fourPointer = NULL;
	char* fivePointer = NULL;

	printf("%p\n", onePointer);

	onePointer = &one;
	twoPointer = &two;
	threePointer = &three;
	fourPointer = &four;
	fivePointer = &five;

	printf("%p\n", onePointer);

	*onePointer = 10;
	*twoPointer = 20;
	*threePointer = 30;
	*fourPointer = 40;
	*fivePointer = 50;

	printf("%d\n", *onePointer);
	printf("%p\n", onePointer);	

	int var;
	int* varPointer = &var;

	printf("Variable \"var\" is %d, pointer is %p value in addres is %d\n", var, varPointer, *varPointer);

	return;
}