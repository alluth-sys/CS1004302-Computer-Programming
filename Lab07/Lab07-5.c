#include <stdio.h>
unsigned long long int fibonacci(unsigned a){
	unsigned long long int fibmin2 = 0;
	unsigned long long int fibmin1 = 1;
	unsigned long long int fib=0;
	if (a==0||a==1){
		return a;
	}
	for(int i=2;i<=a;i++){
		fib=fibmin1+fibmin2;
		fibmin2=fibmin1;
		fibmin1=fib;
	}
	return fib;

}
int main(){
	unsigned a=1;
	while(fibonacci(a)< (9223372036854775807)){
		a++;
	}
	printf("%llu",fibonacci(a));

}