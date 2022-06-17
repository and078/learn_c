#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number = 0;
	int* numberPointer = &number;

	printf("%d\n", number);
	printf("%p\n", numberPointer);

	*numberPointer = 10;
	printf("%d\n", number);

	return 0;
}