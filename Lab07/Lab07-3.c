#include<stdio.h>
#include<math.h>
int exponent_func(int base,int exponent);
int main(){
	int base,exponent;
	printf("Enter the base>>\n");
	scanf("%d",&base);
	printf("Enter the exponent>>\n");
	scanf("%d",&exponent);
	printf("The result is %d",exponent_func(base,exponent) );
}
int exponent_func(int base, int exponent){
	if(exponent==1){
		return base;
	}
	else{
		return (base*(pow(base,exponent-1)));
	}
}
