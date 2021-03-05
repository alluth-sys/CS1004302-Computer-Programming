#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void CAI(){
	int num1,num2,ans,reply=-1,responses,correct_counter=0,response_counter=0;
	num1 = (rand()%10);
	num2 = (rand()%10);
	printf("How much is %d times %d?\n",num1,num2);
	ans = num1*num2;
	
	while(ans != reply){
	if(response_counter==10){
		if(correct_counter>=8){
			printf("Congratulations, you are ready to go to the next level!\n");
		}
		else{
			printf("Please ask your teacher for extra help\n");
		}
		correct_counter=0;
		response_counter=0;
		CAI();
	}
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
		correct_counter++;
		response_counter++;


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
		response_counter++;

		}

	}
	CAI();
	}
	
int main(){
	srand(time(NULL));
	CAI();

}