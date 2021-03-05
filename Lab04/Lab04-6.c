#include <stdio.h>
#include <stdlib.h>
int main(void){
    int number, i, flag;
    int counter = 0;
    for (number=1;number<=1000;number++){
       flag = 0;
    for (i = 2; i <= number / 2; i++)
    {
        if ((number % i) == 0)
        {
            flag = 1;
            break;
        }

    }
    if (flag==0){
        counter++;
        printf("%d\n",number);
    {
    
    }

    
    }}
    printf("%d", counter);
}
    