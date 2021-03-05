#include <stdio.h>
#include <stdlib.h>
#include<time.h>

enum Status{CONTINUE,WON,LOST};

int rollDice(void);
int wager(void);

int main(){
	srand(time(NULL));

	int myPoint;
	int bankBalance=1000,wager;
	enum Status gameStatus;
	
	while(bankBalance>0){
		printf("Your balance is:%d\n",bankBalance);
		printf("Please enter amount to wager>>\n");
		scanf("%d",&wager);

		int sum = rollDice();

		switch(sum){
			case 7:
			case 11:
				gameStatus = WON;
				bankBalance += wager;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = LOST;
				bankBalance -= wager;
				break;
			default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n",myPoint);
			break;
		}
		

		while(CONTINUE==gameStatus){
			sum = rollDice();

			if(sum==myPoint){
				gameStatus=WON;
				bankBalance += wager;
			}
			else{
				if(7==sum){
					gameStatus = LOST;
					bankBalance -= wager;
				}
			}
		}
		if (WON==gameStatus){
			puts("Player wins");
		}
		else{
			puts("Player loses");
		}

	}
	printf("Sorry you busted!\n");	
}
int rollDice(void){
	int die1 = 1+(rand()%6);
	int die2 = 1+(rand()%6);
	printf("Player rolled %d + %d = %d\n",die1,die2,die1+die2);
	return die1+die2;
}

