#include <stdio.h>
int main(){
	int digit;
	printf("Enter a digit up to 10 digit>>\n");
	scanf("%d",&digit);
	while(digit!=0){
		printf("%d",digit%10);
		digit= digit/10;
	
	}
	printf("\n");

}