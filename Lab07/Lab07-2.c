#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess(void){
	int guessed_number,rand_num;
	char ans;
	rand_num = rand()%1000 + 1;
	while(1){
			printf("Enter a number>> \n");
			scanf("%d",&guessed_number);
			if(guessed_number==rand_num){
				printf("You are correct!\n");
				break;
			}
			if(guessed_number<rand_num){
				printf("Too low guess again:\n");
			}
			if(guessed_number>rand_num){
				printf("Too high guess again:\n");
			}

		}	
	printf("Do you want to play again? y or n\n");
	scanf("%c %c",&ans,&ans);
	if(ans=='y'){
		guess();
	}
	else{
		printf("Thank you\n");
	}
}
int main(){
	int guessed_number,rand_num;
	
	srand(time(NULL));
	guess();
	return 0;
}

