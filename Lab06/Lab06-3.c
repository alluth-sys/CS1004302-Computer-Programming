#include <stdio.h>
int isEven(int a);
int main(){
	int x;
	printf("Enter an interger>>\n");
	scanf("%d",&x);
	while(x!=0){
		if(isEven(x)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		printf("Enter an interger>>\n");
		scanf("%d",&x);
	}

}
int isEven(int a){
	if(a%2==0){
		return 1;
	}
	else{
		return 0;
	}
}