//Programm to show all numbers from 0 to 999999, wich sum of first tree dgits are equals to sum of last tree digits

#include <stdio.h>

void ticket (int input)
{

	int one, two, three, four, five, six;
	
	one   = input / 100000;
	two   = (input - one * 100000) / 10000;
	three = (input - one * 100000 - two * 10000)
	 / 1000;
	four  = (input - one * 100000 - two * 10000
	 - three * 1000)/ 100;
	five  = (input - one * 100000 - two * 10000
	 - three * 1000 - four * 100) / 10;
	six   = (input - one * 100000 - two * 10000
	 - three * 1000 - four * 100 - five * 10) / 1;

	//printf("%d\n%d\n%d\n%d\n%d\n%d\n ", one, two,
	// three, four, five, six);

	if((one + two + three) == (four + five + six))
	{
		printf("Happy!\n");
	} 
	else 
	{
		printf("Not happy (\n");
	}

	return;
}

int main (void)
{
	int number = 0;
	printf("Enter number from 0 to 999999: \n");
	scanf("%d", &number);

	if(number >= 0 && number < 999999)
	{
		ticket(number);	
	}
	else
	{
		printf("Wrong input!\n");
	}
	

	return 0;
}