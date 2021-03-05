#include <stdio.h>

void stringReverse(char a[]){
	if('\0'==a[0]){
		return;
	}
	else{
		stringReverse(&a[1]);
		putchar(a[0]);
	}
}
int main(){
	char str[100];
	puts("Enter line of text:");
	fgets(str,100,stdin);
	stringReverse(str);


}