//Playng with arrays and pointers

#include <stdio.h>

#define SIZE 4

void showArrayAdresses(float array[])
{
	printf("\nArray Adresses: \n");

	printf("\n0: %p\n", &array[0]);
	printf("1: %p\n", &array[1]);
	printf("2: %p\n", &array[2]);
	printf("3: %p\n", &array[3]);	
	return;
}

void showArrayAdressesByPointer(float * array)
{
	printf("\nArray Adresses: \n");

	printf("\n0: %p\n", &array[0]);
	printf("1: %p\n", &array[1]);
	printf("2: %p\n", &array[2]);
	printf("3: %p\n", &array[3]);	

	return;
}

int main(void)
{
	float prices[SIZE] = { 1000.0, 2000.0, 3000.0, 4000.0 }; 

	printf("\nIndex acces: \n");

	printf("\nindex 0: %10.2f\n", prices[0]);
	printf("index 1: %10.2f\n", prices[1]);
	printf("index 2: %10.2f\n", prices[2]);
	printf("index 3: %10.2f\n", prices[3]);

	printf("\nPointer acces: \n");

	printf("\nindex 0: %10.2f\n", *(prices + 0));
	printf("index 1: %10.2f\n", *(prices + 1));
	printf("index 2: %10.2f\n", *(prices + 2));
	printf("index 3: %10.2f\n", *(prices + 3));

	// printf("\nindex 3: %10.2f\n", *(prices + 4));
	// printf("index 3: %10.2f\n", *(prices + 5));

	size_t floatSize = sizeof(float);
	size_t intSize = sizeof(int);
	size_t charSize = sizeof(char);
	size_t shortSize = sizeof(short);

	printf("\nFloat size: %zu bytes\n", floatSize);
	printf("Int size: %zu bytes\n", intSize);
	printf("Char size: %zu bytes\n", charSize);
	printf("Short size: %zu bytes\n", shortSize);

	printf("\nprices size: %zu bytes\n ", sizeof prices);

	showArrayAdresses(prices);
	showArrayAdressesByPointer(prices);


	return 0;
}