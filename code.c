//Programm to calculate audio transformer inductivity 

#include <stdio.h>
#include <math.h>

float turns_calc(){
	float testTurns, testInductance, neededIndutance, indKoeff, turnsKoeff, neededTurns;
	printf("Number of test coil turns: \n");
	scanf("%f", &testTurns);
	printf("Measured test coil inductivity: \n");
	scanf("%f", &testInductance);
	printf("Needed inductance: \n");
	scanf("%f", &neededIndutance);

	indKoeff = neededIndutance / testInductance;

	//printf("%f\n", indKoeff);
	turnsKoeff = sqrtf (indKoeff);
	//printf("%f\n", turnsKoeff);
	neededTurns = testTurns * turnsKoeff;
	printf("For %f mHn you need make %f turns\n", neededIndutance, neededTurns);
}

float inductance_calc(){
	float testTurns, testInductance, neededIndutance, indKoeff, turnsKoeff, neededTurns;
	printf("Number of test coil turns: \n");
	scanf("%f", &testTurns);
	printf("Measured test coil inductivity: \n");
	scanf("%f", &testInductance);
	printf("Supposed number of turns: \n");
	scanf("%f", &neededTurns);

	turnsKoeff = neededTurns / testTurns;

	//printf("%f\n", indKoeff);
	indKoeff = turnsKoeff * turnsKoeff;
	//printf("%f\n", turnsKoeff);
	neededIndutance = testInductance * indKoeff;
	printf("If you make %f turns, inductance will be %f mHn\n", neededTurns, neededIndutance);	
}

int main(){
	int input = 0;

	printf("Press 1 to calculate turns or press 2 to calculate inductance: ");
	scanf("%d", &input);

	if(input == 1){
		turns_calc();
	}else if(input == 2){
		inductance_calc();	
	}else{
		printf("Error input!\n");
	}  

	
    
    return 0;
}