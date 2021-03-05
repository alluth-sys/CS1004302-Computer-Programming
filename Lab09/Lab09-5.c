#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randNum(void){
	int num;
	num = (rand()%2);
	return num;
}
int main(){
	int balls,slots,max=0;
	int R_count=0;
	srand(time(NULL));
	printf("Enter the number of balls to drop and slots: \n");
	scanf("%d %d",&balls,&slots);
	int arr[slots];
	for(int i=0;i<slots;i++){
		arr[i]=0;
	}
	for(int k=0;k<balls;k++){
		for(int i=0;i<slots-1;i++){
			switch(randNum()){
				case 1: printf("R");
				R_count++;
				break;
				case 0: printf("L");
				break;
			}
			
		}
	printf("\n");
	arr[R_count]++;	
	R_count=0;
	}
	for(int i=0;i<slots;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(int i=max;i>=1;i--){
		for(int k=0;k<slots;k++){
			if(arr[k]>=i){
				printf("O");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	


		

}