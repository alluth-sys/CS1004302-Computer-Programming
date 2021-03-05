#include <stdio.h>
int main(){
	int i,k;
	int star[5];
	for(i=0;i<5;i++){
		printf("Enter Num %d\n",i+1);
		scanf("%d",&star[i]);
	
	}
	for(k=0;k<5;k++){
			for(int j=0;j < star[k];j++)
				printf("*");	
				printf("\n");
		}

		
	}