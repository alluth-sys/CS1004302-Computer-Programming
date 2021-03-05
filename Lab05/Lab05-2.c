#include <stdio.h>
int main(){
	int num;
	printf("Enter a number>> \n");
	scanf("%d",&num);
	for(int i=2;i<=num;i++){
		while(num%i==0){
			printf("%d\n",i);
			num /= i;

	}

	}
}