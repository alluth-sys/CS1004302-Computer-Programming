#include <stdio.h>
int main(){
	int number, orinum, remainder, sum = 0;
    for(number=100;number<1000;number++){
    	orinum = number;
    sum = 0 ;
    while (orinum != 0)
    {
        remainder = orinum%10;
        sum += remainder*remainder*remainder;
        orinum /= 10;
    }
    if(sum == number)
        printf("%d\n",number);    
}
   return 0; }
    
