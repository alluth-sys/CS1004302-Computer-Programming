#include <stdio.h>
//0 3 6 0 0 0 2 9 1 4 5 2
int main(){
	int barcode[12];
	printf("Enter 12 digits:\n");
	for(int i=0;i<12;i++){
		scanf("%d",&barcode[i]);
		}
	int odd_sum=0;
	int even_sum=0;
	int check_dig=0;
	int total=0;
	int last_dig=0;
	//step 1
	for(int k=0;k<12;k+=2){
		odd_sum += barcode[k];
	}
	odd_sum *=3;
	//step 2
	for(int j=1;j<11;j+=2){
		even_sum += barcode[j];
	}
	if(even_sum%10==0){
		check_dig=0;
	}
	else{
		total=odd_sum+even_sum;
		last_dig=total%10;
		last_dig=10-last_dig;
		check_dig=last_dig;
	}
	if(barcode[11]==check_dig){
		printf("Validated");
	}
	else{
		printf("error in barcode");
	}



}