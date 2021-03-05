#include <string.h>
#include <stdio.h>

void search(char *a,char *b,int lenght){
	char *searchPtr;
	searchPtr = strstr(a,b);
	while(searchPtr!=NULL){
		printf("%s\n",searchPtr+lenght);
		searchPtr = strstr(searchPtr+lenght,b);

	}
	



}

int main(){
	char str[100];
	char key[100];
	char *strPtr=str;
	char *keyPtr=key;
	gets(str);
	gets(key);
	int lenght = strlen(key);
	search(str,key,lenght);




}