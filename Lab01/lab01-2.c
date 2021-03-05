#include <stdio.h>
int main(void){
	int seconds,minutes,hours; 
	printf("Enter the time elapsed in seconds\n");
	scanf("%d",&seconds);
	minutes = seconds/60%60;
	hours = seconds/60/60;
	seconds = seconds%60;
	printf("%d:%d:%d\n",hours,minutes,seconds);


}