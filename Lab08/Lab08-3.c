#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void CAI(){
	int num1,num2,ans=-1,reply;
	num1 = (rand()%10);
	num2 = (rand()%10);
	printf("How much is %d times %d?\n",num1,num2);
	ans = num1*num2;
	while(ans != reply){
	scanf("%d",&reply);
	if(reply==ans)
	{
		printf("very good\n");
	}
	else{
		printf("Try again\n");
		}

	}
	CAI();
	
	
}
int main(){
	srand(time(NULL));
	CAI();

}