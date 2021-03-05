#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int recursive_result(int b){
	if(b==1||b==0){
		return b;
	}
	else{
		return b*recursive_result(b-1);
	}
}


void ReturnString(int a){
	int result = recursive_result(a);
	int hold=result;
	//count digits
	int count_dig=0;
	while(hold!=0){
		hold/=10;
		count_dig++;
	}
	//count char
	int lenght=(2*a)+5+count_dig;

	if(a==0){
		for(int i=0;i<6;i++){
			printf("*");
		}
		printf("\n");
		printf("*0!=1*\n");
		for(int i=0;i<6;i++){
			printf("*");
		}
	}
	else if(a>9||a<0){
		printf("invalid input\n");
	}
	else{
		for(int i=0;i<lenght;i++){
			printf("*");
		}
		printf("\n");
		printf("*");
		printf("%d!=",a);
		int temp=a;
		for(int i=0;i<a;i++){
			printf("%d",temp);
			if(temp!=1){
				printf("x");
			}
			temp--;
		}
		printf("=");
		printf("%d",result);
		printf("*\n");
		for(int i=0;i<lenght;i++){
			printf("*");
		}


	}
}


int main(){
	int num;
	printf("Enter a number from 1 to 9 (-1 to end): \n");
	scanf("%d",&num);
	while(num!=-1){
		ReturnString(num);
		printf("\n");
		printf("Enter a number from 1 to 9 (-1 to end): \n");
		scanf("%d",&num);
	}
}