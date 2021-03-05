#include <stdio.h>

struct complex_number{
	float real;
	float imaginary;
};

struct complex_number add_complex(struct complex_number x,struct complex_number y){
	struct complex_number a;
	a.real=x.real+y.real;
	a.imaginary=x.imaginary+y.imaginary;
	return a;
}

int main(){
	struct complex_number num1,num2;
	printf("Enter two complex number\n");
	scanf("%f+%fi",&num1.real,&num1.imaginary);
	scanf("%f+%fi",&num2.real,&num2.imaginary);
	struct complex_number result = add_complex(num1,num2);
	printf("-----------------\n");
	printf("%.1f+%.1fi\n",result.real,result.imaginary);

}