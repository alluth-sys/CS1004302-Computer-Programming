#include <stdio.h>

void DisplayBit(unsigned int a){
	unsigned int mask = 1<<31;

	unsigned int value = a;
	for(int i=1;i<=32;i++){
		putchar(value & mask ? '1' : '0');
		value<<=1;

		if(i%8==0){
			printf(" ");
		}

	}
}


void packCharacter(unsigned char a, unsigned char b){
	unsigned int x = a;
	x<<=8;
	x|=b;
	DisplayBit(x);
}

int main(){
	unsigned char a,b;
	printf("Please enter two characters : \n");
	scanf("%c %c",&a,&b);
	packCharacter(a,b);

}