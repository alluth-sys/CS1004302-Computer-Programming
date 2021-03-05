#include <stdio.h>
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("---output---\n");
	for(int row=num;row>=1;row--){
		for(int i=row;i>=1;i--){
			printf("%d",i);
			if(i==1){
				for(int j=2;j<=row;j++){
					printf("%d",j);
				}
			}
		}
	printf("\n");
	}
		
}