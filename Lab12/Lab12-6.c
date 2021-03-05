#include <stdio.h>
#include <string.h>
#define SIZE 25

void compare(char *a[]){
	char *hold;
	for(int l=0;l<6;l++){
		for(int i=0;i<5;i++){
			if(strncmp(a[i],a[i+1],1)>0){
				hold=a[i+1];
				a[i+1]=a[i];
				a[i]=hold;
			}

		}
	}
	for(int k=0;k<=5;k++){
		printf("%s ",a[k]);
	}

		
}

int  main(){
	char str[6][SIZE];
	char *input[6];
	for(int i=0;i<6;i++){
		scanf("%s",str[i]);
		input[i]=str[i];
	}
	
	compare(input);

}