#include <stdio.h>
int main(){
	int a,b,c;
	for(a=2;a<=500;a++){
		for(b=1;b<a;b++){
			for(c=1;c<b;c++){
				if ((a*a)==(b*b)+(c*c)){
					printf("%d %d %d",a,b,c );
					printf("\n");
				}
			}
		}
	}}