#include <stdio.h>
#include <string.h>
#define SIZE 100
void reverse(char a[],char *b[]){
	char *tokenPtr;
	int i=0;
	tokenPtr = strtok(a," ");
	while(tokenPtr!=NULL){
		b[i++]=tokenPtr;
		tokenPtr=strtok(NULL," ");
	}
	for(int d=i-1;d>=0;d--){
		printf("%s ",b[d]);
	}
}

int main(){
	char *store[SIZE];
	char original[SIZE];
	gets(original);
	reverse(original,store);

}
