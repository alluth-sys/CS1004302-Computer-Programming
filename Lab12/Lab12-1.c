#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int testPalindrome(char *array,int num){
	for(int i=0;i<=num/2;i++){
		if((array[i])!=(array[num-1-i])){
			return 0; 
		}
	}
	return 1;
}

int main(){
	char sentence[SIZE];	
	printf("Enter a line: \n");
	int i=0;
	int c;
	while((i<SIZE-1)&&(c=getchar())!='\n'){
		if(!isspace(c)&&!ispunct(c)){
			sentence[i++]=c;
		}
	}
	sentence[i]='\0';
	if(testPalindrome(sentence,i)){
		printf("it is a palindrome\n");
	}
	else
		printf("It is Not\n");


}