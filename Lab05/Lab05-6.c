#include <stdio.h>
int main(){
	int num,max=0,count_max=0;
	printf("Enter intergers(0 to end)>> \n");
	scanf("%d",&num);
	while(num!=0){
		if(num>max){
			count_max=1;
			max = num;
		}
		else if(num==max){
			count_max++;
		}
		printf("Enter intergers(0 to end)>> \n");
		scanf("%d",&num);
	}
	printf("The largest number is %d\n",max);
	printf("The occurrence count of the largest number is %d\n",count_max);
}