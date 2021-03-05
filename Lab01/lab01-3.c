#include <stdio.h>
int main(){
	int num1;
	printf("Enter a number\n");
	scanf("%d",&num1);
	if(num1%2==0){
		printf("Even\n");
	}
	else{
		printf("Odd\n");
	}
}