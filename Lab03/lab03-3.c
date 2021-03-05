#include <stdio.h>
#include <stdlib.h>
int main(void){
    int number, i, flag;
 
    printf("Enter a number \n");
    scanf("%d", &number);
 
    if (number <= 1)
    {
        printf("%d is not a prime numbers \n", number);
        exit(1);
    }
    flag = 0;
    for (i = 2; i <= number / 2; i++)
    {
        if ((number % i) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number \n", number);
     else
        printf("%d is not a prime number \n", number);
}