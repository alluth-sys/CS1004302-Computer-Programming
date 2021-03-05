#include <stdio.h>
#include <string.h>
#include <math.h>

struct sci_not_t{
	float mantissa;
	int exponent;
};

struct sci_not_t scan_sci(char a[]){
	struct sci_not_t sci_num;
	char *tokenPtr=strtok(a,"e");
	float x;
	sscanf(tokenPtr,"%f",&x);
	if(!((x<1.0)&&(x>=0.1))){
		printf("Out of range please enter again:\n");
	}
	else{
		while((x<1.0)&&(x>=0.1)){
			sci_num.mantissa=x;
		}
	}
	int y;
	tokenPtr=strtok(NULL,"e");
	sscanf(tokenPtr,"%d",&y);
	sci_num.exponent=y;
	return sci_num;
}

int main(){
	struct sci_not_t x,y;
	float result_1,result_2;
	char str1[15];
	char str2[15];
	scanf("%s",str1);
	scanf("%s",str2);
	x=scan_sci(str1);
	y=scan_sci(str2);
	result_1=x.mantissa*pow(10,x.exponent);
	result_2=y.mantissa*pow(10,y.exponent);

	float sum,difference,product,quotient;

	sum=result_1+result_2;
	difference=result_1-result_2;
	product=result_1*result_2;
	quotient=result_1/result_2;

	int exponent_count=0;
	while(sum>=1){
		sum/=10;
		exponent_count++;
	}
	printf("Sum:%fe%d\n",sum,exponent_count);
	
	exponent_count=0;
	while(difference>=1){
		difference/=10;
		exponent_count++;
	}
	printf("Difference:%fe%d\n",difference,exponent_count);

	exponent_count=0;
	while(product>=1){
		product/=10;
		exponent_count++;
	}
	printf("Product:%fe%d\n",product,exponent_count);

	exponent_count=0;
	while(quotient>=1){
		quotient/=10;
		exponent_count++;
	}
	printf("Quotient:%fe%d\n",quotient,exponent_count);
}