#include <stdio.h>
int main(){
	float distance,miles_per_gallon,price_per_gallon,cost;
	printf("Enter the driving distance\n");
	scanf("%f",&distance);
	printf("Enter miles_per_gallon\n");
	scanf("%f",&miles_per_gallon);
	printf("Enter price_per_gallon\n");
	scanf("%f",&price_per_gallon);
	cost = distance/miles_per_gallon*price_per_gallon;
	printf("The cost of driving is %f\n",cost );

}