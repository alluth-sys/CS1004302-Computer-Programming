#include <stdio.h>
#include<math.h>
int main(){ 
	float pi;
	for(int j=10000;j<=100000;j+=10000){
		pi=0;
		for(int i=1;i<=j;i++){
			pi += 4.0*(pow(-1,i+1)/((2*i)-1));


	}
	printf("%d  pi=%f\n",j,pi );	
	}


	}
	


