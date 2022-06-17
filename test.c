#include <stdio.h>

int cycle(int input){
	for(int i = 0; i <= input; i++){
		printf("Number is: %d\n", i);
	}
	printf("\n");
}

int main(){
	cycle(5);
	cycle(10);
	cycle(100);
	return 0;
}
