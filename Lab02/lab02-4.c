#include <stdio.h>
int main(){
	int number,digit1,digit2,digit3,digit4,digit5,sum;
	printf("Enter a five number digit:\n");
	scanf("%d",&number);
	digit5 = number%10;
	number = number/10;
	digit4 = number%10;
	number = number/10;
	digit3 = number%10;
	number = number/10;
	digit2 = number%10;
	number = number/10;
	digit1 = number%10;
	number = number/10;
	if((digit1==digit5)&&(digit2==digit4)){
		printf("This number is palindrone\n");
	}
	else{
		printf("This numer is NOT palindrone\n");
	}
	
}