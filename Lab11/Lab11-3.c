#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES])
{
	for(size_t card=1;card<=CARDS;card++){
		size_t row;
		size_t column;

		do{
			row = rand()%SUITS;
			column = rand()%FACES;
		}while(wDeck[row][column]!=0);
		wDeck[row][column]=card;
	}
}
int deal(unsigned int wDeck[][FACES],const char *wFace[],const char*wSuit[],int player){
	int Fcount[FACES]={0};
	int Scount[SUITS]={0};
	if(player==1){
		for(size_t card=1;card<=5;card++){
			for(size_t row=0;row<SUITS;row++){
				for(size_t column=0;column<FACES;column++){
					if(wDeck[row][column]==card){
						Fcount[column]++;
						Scount[row]++;
						printf("%5s of %-8s\n",wFace[column],wSuit[row]);
					}
				}
			}	
		}
	}
	
	if(player==2){
			for(size_t card=6;card<=10;card++){
				for(size_t row=0;row<SUITS;row++){
					for(size_t column=0;column<FACES;column++){
						if(wDeck[row][column]==card){
						Fcount[column]++;
						Scount[row]++;
						printf("%5s of %-8s\n",wFace[column],wSuit[row]);
					}
				}
			}	
		}
	}
	int flag=0;

	int two_count=0,three_count=0,four_count=0;
	for(int i=0;i<FACES;i++){
		if(Fcount[i]==4){
			four_count++;
		}
		else if(Fcount[i]==3){
			three_count++;
		}
		else if(Fcount[i]==2){
			two_count++;
		}
	
	}
	if(four_count==1){
		printf("Four of a kind\n");
		flag=1;
		return 8;
	}
	if((three_count==1)&&(two_count==1)){
		printf("Full House\n");
		flag=1;
		return 7;
	}
	if(three_count==1){
		printf("Three of a kind\n");
		flag=1;
		return 4;	
	}
	if(two_count==2){
		printf("Two pair\n");
		flag=1;
		return 3;
	}
	if(two_count==1){
		printf("One pair\n");
		flag=1;
		return 2;
	}

	int straight=0,flush=0;
	for(int i=0;i<SUITS;i++){
		if(Scount[i]==5){
			straight++;
			}
		}
	for(int i=0;i<FACES&&flush==0;i++){
		while((i<FACES)&&(Fcount[i]!=0)){
			flush++;
			i++;
		}
	}
	if((flush==5)&&(straight==1)){
		printf("Straight flush\n");
		flag=1;
		return 9;
	}
	if((flush==5)&&(straight!=1)){
		flag=1;
		printf("Flush\n");
		return 6;
	}
	if((straight==1)&&(flush!=5)){
		flag=1;
		printf("Straight\n");
		return 5;
	}
	if(flag==0){
		printf("High Card\n");
		return 1;
	}
	return 0;
}

int main(){
	unsigned int deck[SUITS][FACES]={0};
	srand(time(NULL));
	shuffle(deck);

	const char *suit[SUITS]={"Hearts","Diamonds","Clubs","Spades"};
	const char *face[FACES]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
	
	int player1=deal(deck,face,suit,1);
	printf("\n");
	int player2=deal(deck,face,suit,2);
	if(player1==player2){
		printf("its a draw\n");
	}
	else if(player1>player2){
		printf("Player 1 wins\n");
	}
	else {
		printf("Player 2 wins\n");
	}
}

	