#include <stdio.h>
int main(){
	int number[5];
	for (int i=0;i<5;i++){
		printf("Enter how many sold for product%d\n",i+1);
		scanf("%d",&number[i]);
	}
	int sum;
	for(int i=1;i<=5;i++){
		switch(i){
			case 1: sum += number[i-1]*2.98;break;
			case 2: sum += number[i-1]*4.50;break;
			case 3: sum += number[i-1]*9.98;break;
			case 4: sum += number[i-1]*4.49;break;
			case 5: sum += number[i-1]*6.87;break;
			default:break;
		}
	
	}
printf("the total is %d\n",sum );
}

	