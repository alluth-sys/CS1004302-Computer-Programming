#include <stdio.h>
int main(){
	float sales,bonus,salary=200;
	printf("%s\n","Enter sales in dollars(-1 to end)>>" );
	scanf("%f",&sales);
	if (sales!= -1){
		bonus = (sales*(9.0/100));
		salary = salary + bonus;
		printf("Salary is: %f\n",salary);
	}
	return 0;

}