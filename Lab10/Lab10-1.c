#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void){
	int num;
	num = 1+rand()%6;
	return num;
}
int main(){
	int arr[11]={0};
	srand(time(NULL));
	for(int i=1;i<=36000;i++){
		int num=rollDice()+rollDice();
		switch(num){
			case 2:arr[num-2]++;
				break;
			case 3:arr[num-2]++;
				break;
			case 4:arr[num-2]++;
				break;
			case 5:arr[num-2]++;
				break;
			case 6:arr[num-2]++;
				break;
			case 7:arr[num-2]++;
				break;
			case 8:arr[num-2]++;
				break;
			case 9:arr[num-2]++;
				break;
			case 10:arr[num-2]++;
				break;
			case 11:arr[num-2]++;
				break;
			case 12:arr[num-2]++;
				break;
		
		}
	}
	printf("|");
	for(int i=2;i<=12;i++){
		printf("\t %d \t|",i);
	}
	printf("\n");
	for(int j=0;j<=10;j++){
		printf("|\t %d \t",arr[j]);
	} 
	printf("|");




}