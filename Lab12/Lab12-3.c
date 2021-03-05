#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 14


int main(){
	char telnum[SIZE];
	char area[3]={0};
	char number[9]={0};
	char *a;
	char *remainderPtr;

	printf("Enter a telephone number:\n");
	scanf("%13s",telnum);
	a = strtok(telnum,"()");
	if(a!=NULL)
		strncat(area,a,sizeof area-1);
	a = strtok(NULL,"-");
	if(a!=NULL)
		strncat(number,a,sizeof number-1);
	a = strtok(NULL,"-");
	if(a!=NULL)
		strncat(number,a,sizeof number-1);

	puts(area);
	long area_l = strtol(area,&remainderPtr,10);
	
	int number_l;
	sscanf(number,"%d",&number_l);

	printf("the area code is: %02ld \n",area_l);
	printf("The Phone number is: %08d \n",number_l);






	


}