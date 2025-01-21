// Standard Number Guesser Game
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
# include <stdbool.h>

int main(){
	char name[20];
	int turns = 0;
	int correct;
	int guess;
	bool keepGoing;

	srand(time(NULL));

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hi, %s! Let's play a game! \n", name);

	correct =(rand() % 100) + 1;
	printf("Correct: %d \n", correct);
	
	while(keepGoing){
		turns++;
		printf("Turns: %d \n", turns);
		printf("Guess\n");
		scanf("%d",&guess);
		if (correct > guess){
			printf("Too low \n");
		}
		else if (correct < guess){
			printf("Too high \n");
		}
		else {
			printf("You're so smart! \n");
			keepGoing = false;
		}		
		if (turns < 7){
			printf("Great \n");
		}
		if (turns > 7){
			printf("You lose \n");
			keepGoing = false;
		}
	} //end while loop	
return(0);
} //end main

