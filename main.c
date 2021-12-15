#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc,char**argv){
	if(argc==1){
		srand (time(NULL));
		int number_to_guess=rand() %100+1;
		printf("I have in mind a number in between 1 and 100, can you find it?\n");
		int guess;
		scanf("%d",&guess);
		while(guess != number_to_guess){
			if(guess>0 && guess<=100){
				if(guess<number_to_guess){
					printf("the number to guess is higher\n");
					scanf("xd", &guess);
				}
				else if( guess> number_to_guess ){
					printf("the number to guess is lower\n");
					scanf("%d", &guess);
				}
			}
			else{
				printf("error syntax\n");
				return 1;
			}
		printf("You just found the number, it was indeed %d\n",guess);
		return 0;
	}
}
}
