#include <stdio.h>
int main(){
	int num,num1,num2,num3,num4,t,k;
	printf("%s\n","Enter a four digit number>> " );
	scanf("%d",&num);
	num4 = num%10;
	num = num/10;
	num3 = num%10;
	num = num/10;
	num2 = num%10;
	num = num/10;
	num1 = num%10;
	num = num/10;
	//num1 = ((num1+10)-7)%10;
	//num2 = ((num2+10)-7)%10;
	//num3 = ((num3+10)-7)%10;
	//num4 = ((num4+10)-7)%10;
	num1 = (num1-7)%10;
	num2 = (num2-7)%10;
	num3 = (num3-7)%10;
	num4 = (num4+10-7)%10;

	t = num1;
	num1 = num3;
	num3 = t;
	k = num2;
	num2 = num4;
	num4 = k;
	printf("%d%d%d%d\n",num1,num2,num3,num4 );

}