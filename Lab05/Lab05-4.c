#include <stdio.h>
#include <math.h>
int main(){
	float sum;
	for(int n=1;n<=999;n++){
		sum += (1/(sqrt(n)+sqrt(n+1)));
	}
	printf("%f\n",sum );
}