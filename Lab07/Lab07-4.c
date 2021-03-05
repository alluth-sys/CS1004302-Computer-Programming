
#include <stdio.h> 

int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int lcm(int a, int b) 
{ 
	return (a*b)/gcd(a, b); 
} 

int main() 
{ 
	int a,b;
	printf("Enter A and B>>\n"); 
	scanf("%d%d",&a,&b);
	printf("%d",lcm(a, b)); 
	return 0; 
} 
