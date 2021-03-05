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

void reverseBit(unsigned int a){
	unsigned int mask = 1;

	unsigned int value = a;
	for(int i=1;i<=32;i++){
		putchar(value & mask ? '1' : '0');
		value>>=1;

		if(i%8==0){
			printf(" ");
		}

	}
	
}

int main(){
	unsigned int num;
	printf("Enter a number: \n");
	scanf("%u",&num);
	DisplayBit(num);
	printf("\n");
	printf("Reverse: \n");
	reverseBit(num);


}


/*void reverseBit(unsigned int a){
	unsigned int mask = 1;
	unsigned int result = 0;
	unsigned int value = a;
	for(int i=1;i<=32;i++){
		value = a & mask;
		value <<= 32-i;
		result |= value;
	}
}*/