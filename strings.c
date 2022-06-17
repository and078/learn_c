#include <stdio.h>

int main(void)
{
	char * hello3;
	scanf("%c", hello3);
	int iterator = sizeof hello3 / sizeof hello3[0];

	for(int i = 0; i < iterator; i++)
	{
		printf("%c\n", hello3[i]);
	}

	return 0;
}