#include <stdio.h>
struct fraction{
	int numerator;//分子
	int denominator;//分母
};

int gcd(int a, int b) 
{  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

void reduce(struct fraction f,struct fraction*reduced_f){
	int gcd_hold;
	gcd_hold=gcd(f.numerator,f.denominator);
	reduced_f->numerator=f.numerator/gcd_hold;
	reduced_f->denominator=f.denominator/gcd_hold;
}

int  main(){
	struct fraction number;
	struct fraction reduced_f;
	printf("Enter a fraction: \n");
	scanf("%d/%d",&number.numerator,&number.denominator);
	reduce(number,&reduced_f);
	printf("in lowest terms: %d/%d\n",reduced_f.numerator,reduced_f.denominator);


}