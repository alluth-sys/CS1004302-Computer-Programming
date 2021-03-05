#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flip(void);
int main(){
	int head_count=0,tail_count=0;
	srand(time(NULL));
	for(int i=1;i<=1000;i++){
		if(flip()==1){
			head_count++;
		}
		else{
			tail_count++;
		}
	}
	printf("heads:%d tails:%d",head_count,tail_count);
	
}
int flip(void){
	int face;
	face = (1+(rand()%2));
	if (face==1){
		return 1;
	}
	else{
		return 0;
	}

}