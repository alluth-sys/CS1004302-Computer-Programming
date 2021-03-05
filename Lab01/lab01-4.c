#include <stdio.h>
int main(){
	int num1,num2;
	printf("Enter the first number\n");
	scanf("%d",&num1);
	printf("Please enter the second number\n");
	scanf("%d",&num2);
	if(num1%num2==0){
		printf("the first is a multiple of the second\n");
	}
	else{
		printf("the first not is a multiple of the second\n");
	}
}