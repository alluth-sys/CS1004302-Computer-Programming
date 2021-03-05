#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter first value>>\n");
	scanf("%d",&a);
	printf("Enter second value>>\n");
	scanf("%d",&b);
	printf("Enter third value>>\n");
	scanf("%d",&c);
	if((a+b<=c)||(a+c<=b)||(b+c<=a)){
		printf("%s\n","No");
	}
	else{
		printf("%s\n","Yes" );
	}

}