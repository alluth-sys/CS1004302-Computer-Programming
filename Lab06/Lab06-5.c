#include<stdio.h>
int reverse(int n);
int main(){
	int number;
	printf("Enter a number to be reversed>>\n");
	scanf("%d",&number);
	printf("%d\n",reverse(number));

}
int reverse(int n){
	int num=0;
	while(n!=0){
		num = num*10+(n%10);
		n = n/10;
		

	}
	return num;
}