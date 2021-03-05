#include <stdio.h>
int main(){
	float rate;
	int converter,USD,NTD ;
	printf("Enter the exchange rate from USD to NTD: \n");
	scanf("%f",&rate);
	printf("Enter 0 to convert USD to NTD and 1 vice versa:\n");
	scanf("%d",&converter);
	if (converter==0){
		printf("Enter the USD amount:\n");
		scanf("%d",&USD);
		NTD = USD*rate;
		printf("$ %d USD is %d NTD\n", USD,NTD );
	}
		
	else{
		if (converter==1){
		printf("Enter the NTD amount:\n");
		scanf("%d",&NTD);
		USD = NTD/rate;
		printf("$ %d NTD is %d USD\n", NTD,USD );

		}
	}	
	
	}

	



