#include <stdio.h>
int main(){
	int day,month,year;
	printf("Enter a month\n");
	scanf("%d",&month);
	printf("Enter a day\n");
	scanf("%d",&day);
	printf("Enter a year\n");
	scanf("%d",&year);

	if (month==1){
		month = 13;
		year -= 1;
	}
	else if (month==2){
		month = 14;
		year -= 1;
	}
	switch((day+(26*(month+1)/10)+(year%100)+(year%100/4)+(year/100/4)+(5*year/100))%7)
	{
		case 0:printf("Day of the week is Saturday\n");
			   break;

		case 1:printf("Day of the week is Sunday\n");
			   break;

		case 2:printf("Day of the week is Monday\n");
			   break;
		case 3:printf("Day of the week is Tuesday\n");
			   break;
		case 4:printf("Day of the week is Wednesday\n");
			   break;
		case 5:printf("Day of the week is Thursday\n");
			   break;
		case 6:printf("Day of the week is Friday\n");
			   break;


	}


}