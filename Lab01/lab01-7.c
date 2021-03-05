#include <stdio.h>
int main(){
	float M,finalTemperature,initialTemperature,Q;
	printf("Enter amount water in kilograms\n");
	scanf("%f",&M);
	printf("Enter initial temperature\n");
	scanf("%f",&initialTemperature);
	printf("Enter final temperature\n");
	scanf("%f",&finalTemperature);
	Q = M*(finalTemperature-initialTemperature)*4184;
	printf("he energy needed is %f\n",Q );

}