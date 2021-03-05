#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void CAI(int a){
	int num1,num2,ans,reply=-1,responses,b;
	b = (1+rand()%3);
	num1 = (rand()%10);
	num2 = (rand()%10);
	switch(a){
		case 1: ans=num1+num2;
		break;
		case 2: ans=num1-num2;
		break;
		case 3: ans=num1*num2;
		break;
		case 4: switch(b){
			case 1: ans=num1+num2;
			break;
			case 2: ans=num1-num2;
			break;
			case 3: ans=num1*num2;
			break;
		}
		break;
	}
	
	if(a==1){
		printf("How much is %d add %d?\n",num1,num2);
	}
	else if(a==2){
		printf("How much is %d subtract %d?\n",num1,num2);
	}
	else if(a==3){
		printf("How much is %d multiply %d?\n",num1,num2);
	}
	else if(b==1){
		printf("How much is %d add %d?\n",num1,num2);
	}
	else if(b==2){
		printf("How much is %d subtract %d?\n",num1,num2);
	}
	else if(b==3){
		printf("How much is %d multiply %d?\n",num1,num2);
	}






	
	while(ans != reply){
	responses = (1+rand()%4);
	scanf("%d",&reply);
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
	int type;
	srand(time(NULL));
	printf("Please enter number \n1 is addition\n2 is subtraction\n3 is multiplication\n4 for random>>>\n");
	scanf("%d",&type);

	CAI(type);

}