#include <stdio.h>
int main(){
	//1
	for (int a=0;a<10;a++)
	{
		for(int b=0;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//2
	for (int c=0;c<=9;c++)
	{
		for(int d=9;d>=c;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//3
	for (int row=0;row<=9;row++)
	{
		for(int space=1;space<=row;space++){
			printf(" ");
		}
		for(int d=9;d>=c;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	//4
	for (int a=0;a<10;a++)
	{
		for(int i=9;i>=a;i--){
			printf(" ");
		}
			for(int b=0;b<=a;b++)
			{
				printf("*");
			}
			printf("\n");
	}
	printf("\n");
	

}