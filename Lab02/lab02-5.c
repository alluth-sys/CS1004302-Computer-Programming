#include <stdio.h>
int main(){
	float BMI,weightinKilograms,heightInMeters,underweight,normal,overweight,obese;
	printf("Enter you weight in kilograms:\n");
	scanf("%f",&weightinKilograms);
	printf("Enter your height in meters\n");
	scanf("%f",&heightInMeters);
	BMI = weightinKilograms/(heightInMeters*heightInMeters);
	if(BMI<18.5)
		printf("you are underweight\n");
	else if((BMI>18.5)&&(BMI<24.9))
			printf("you are normal\n");
	else if((BMI>25)&&(BMI<29.9))
		printf("you are overweight\n");
	else
		printf("you are obese\n");
}
	