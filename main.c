#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
	srand(time(NULL));
	if(argc == 1){
		printf("I have in mind a number in between 1 and 100, can you find it?\n");
		int number_to_guess = rand() % 100;
		int guess = 0;
		scanf("%d",&guess);
		while(number_to_guess != guess){
			if(guess > 0 && guess <= 100){
				if(e < number_to_guess){
					printf("The number to guess is higher\n");
					scanf("%d",&guess);
				}
				else if(guess > number_to_guess){
					printf("The number to guess is lower\n");
					scanf("%d",&guess);
				}
			}
			else{
				printf("Invalid argument\n");
				return 1;
			}
			
		}
		printf("You just found the number, it was indeed %d\n", number_to_guess);
		return 0;
	}
	else if(atoi(argv[1])!=0){
		int number_to_guess = rand() % atoi(argv[1]);
		int guess = 0;
		printf("I have in mind a number in between 1 and %d, can you find it ?\n",atoi(argv[1]));
		scanf("%d",&guess);
		while(number_to_guess != guess){
			if(guess > 0 && guess <= atoi(argv[1])){
				if(guess < number_to_guess){
					printf("The number to guess is higher\n");
					scanf("%d",&guess);
				}
				else if(guess > number_to_guess){
					printf("The number to guess is lower\n");
					scanf("%d",&guess);
				}
			}
			else{
				printf("Invalid argument");
				return 1;
			}
		}
		printf("You just found the number, it was indeed %d\n", number_to_guess);
			return 0;
	}
}
