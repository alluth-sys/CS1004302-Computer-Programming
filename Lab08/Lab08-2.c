#include <stdio.h>
#include<math.h>
int isPrime(int num, int i){
	if(i==1){
		return 1;
	}
	else{
		if(num%i==0)
		{
			return 0;
		}
		else
		{
			return isPrime(num,i-1);

		}
	}

}

int main(){
	int num;
	printf("Enter a num to check prime or not>>\n");
	scanf("%d",&num);
	if(isPrime(num,sqrt(num))){
		printf("Yes\n");
	}
	else
		printf("No\n");
}
