#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x, trial = 0	;
	
	do
	{
		printf("Guess a number : ")	;
		scanf("%i", &x)	;
		
		if( answer > x)
			printf("low!\n")	;
		else if (answer < x)
			printf("high!\n")	;
			
		trial ++	;
	} while (x != answer)	;
	{
		printf("Congratulation! trials : %i\n", trial)	;
	}

	
	return 0;
}
