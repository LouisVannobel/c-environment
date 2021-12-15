#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc,char**argv){
	srand (time(NULL));
	int number_to_guess=rand() %100+1;
	int guess;
	printf("I have in mind a number in between 1 and 100, can you find it?\n");
	while(guess != number_to_guess){
		scanf("%d",&guess);
		if(guess<number_to_guess && guess<1){
			printf("the number to guess is higher\n");
		}
		else if( guess> number_to_guess && guess>100){
			printf("the number to guess is lower\n");
		}
		else{
			printf("error syntax")
			return 1;
		
	}
	printf("You just found the number, it was indeed %d\n");
	return 0;
}
	
