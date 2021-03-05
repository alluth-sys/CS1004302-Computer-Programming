#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void CAI(int a){
	int num1,num2,ans,reply=-1,responses;
	
	if(a==1)
	{
		num1 = (rand()%10);
		num2 = (rand()%10);
	}
	else if(a==2)
	{
		num1 = (10+rand()%90);
		num2 = (10+rand()%90);
	}
	else
	{
		num1 = (100+rand()%900);
		num2 = (100+rand()%900);
	}


	printf("How much is %d times %d?\n",num1,num2);
	ans = num1*num2;
	while(ans != reply){
	scanf("%d",&reply);
	responses = (1+rand()%4);
	if(reply==ans)
	{
		switch(responses)
	{
		case 1: printf("Very good!\n");
				break;
		case 2: printf("Exellent!\n");
				break;
		case 3: printf("Nice work!\n");
				break;
		case 4: printf("Keep up the good work!\n");
				break;

	}
	
	}
	else{
		switch(responses)
	{
		case 1: printf("No please try again\n");
				break;
		case 2: printf("Wrong\n");
				break;
		case 3: printf("Dont give up\n");
				break;
		case 4: printf("No.Keep trying\n");
				break;


	}

		}

	}
	CAI(a);
	
	
}
int main(){
	srand(time(NULL));
	int a;
	printf("Enter difficulty:\n");
	scanf("%d",&a);
	CAI(a);

}