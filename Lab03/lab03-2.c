#include <stdio.h>
int main(){
	int hours;
	float rate,salary=0,bonus;
	printf("%s\n","Enter # of hours worked (-1 to end)" );
	scanf("%d",&hours);
	if((hours<=40)&&(hours!=-1)){
		printf("%s\n","Enter hourly rate of the worker ($00.00):" );
		scanf("%f",&rate);	
		salary += (hours*rate);
		printf("Salary is %f\n",salary );
	}
	else if(hours>40){
		printf("%s\n","Enter hourly rate of the worker ($00.00):" );
		scanf("%f",&rate);	
		bonus = (hours-40)*(rate)*(0.5);
		salary += ((hours*rate)+bonus);
		printf("Salary is %f\n",salary );
	}
	return 0;
}