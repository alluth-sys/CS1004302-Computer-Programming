#include <stdio.h>
int main(){
	int num1,num2,num3,sum,average,product;
	printf("Enter the first number\n");
	scanf("%d",&num1);
	printf("Enter the second number\n");
	scanf("%d",&num2);
	printf("Enter the third number\n");
	scanf("%d",&num3);
	sum = num1+num2+num3;
	average = (num1+num2+num3)/3;
	product = num1*num2*num3;
	printf("Sum = %d Average = %d Product = %d\n",sum,average,product);
	if ((num1>num2) && (num1>num3)){
		printf("%d is the largest number\n",num1);
	}
	if ((num2>num1) && (num2>num3)){
		printf("%d is the largest number\n",num2 );
	}
	else{
		printf("%d is the largest number\n",num3 );
	}
	if ((num1<num2) && (num1<num3)){
		printf("%d is the smallest number\n",num1);
	}
	if ((num2<num1) && (num2<num3)){
		printf("%d is the smallest number\n",num2 );
	}
	if ((num3<num1) && (num3<num1)){
		printf("%d is the smallest number\n",num3 );
	}


}
	
	