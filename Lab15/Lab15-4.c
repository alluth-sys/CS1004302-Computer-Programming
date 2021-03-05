#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	srand(time(NULL));
	int tortoise_position=1;
	int hare_position=1;



	int flag=0;
	int percentage;
	while((tortoise_position<70)&&(hare_position<70)){
		//tortoise
		usleep(100000);
		system("clear");
		percentage = (1+rand()%10);
		if((percentage<=5)&&(percentage>=1)){
			tortoise_position+=3;
		}
		else if(percentage<=7){
			if(tortoise_position<7){
				tortoise_position=1;
			}
			else{
				tortoise_position-=6;
			}
		}
		else if(percentage<=10){
			tortoise_position+=1;
		}
		for(int i=0;i<tortoise_position;i++){
			printf(" ");
		}
		printf("T");
		for(int i= tortoise_position+1;i<70;i++){
			printf(" ");
		}

		printf("FINSH LINE\n");

		//hare
		percentage = (1+rand()%10);
		if((percentage<=4)&&(percentage>=2)){
			hare_position+=9;
		}
		else if(percentage<=5){
			if(hare_position<7){
				hare_position=1;
			}
			else{
				hare_position-=12;
			}
		}
		else if(percentage<=8){
			hare_position+=1;
		}
		else if(percentage<=10){
			if(hare_position<7){
				hare_position=1;
			}
			else{
				hare_position-=2;
			}
		}
		for(int i=0;i<hare_position;i++){
			printf(" ");
		}
		printf("H");
		for(int i= hare_position+1;i<70;i++){
			printf(" ");
		}
		printf("%s\n","FINSH LINE");
	}
	if(hare_position>=70){
		printf("Hare wins,Yuch!");
	}
	if(tortoise_position>=70){
		printf("TORTOISE WINS!!! YAY!!!");
	}
	




}