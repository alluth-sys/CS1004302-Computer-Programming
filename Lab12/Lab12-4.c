#include <stdio.h>
#include <string.h>
#define SIZE 100
int word_count(char a[] ){
	int count=0;
	char *tokenPtr;
	tokenPtr = strtok(a," ");
	while(tokenPtr!=NULL){
		count++;
		tokenPtr=strtok(NULL," ");
	}
	return count;
}

int main(){
	char line1[SIZE];
	char line2[SIZE];
	char line3[SIZE];
	char line4[SIZE];

	fgets(line1,SIZE,stdin);
	fgets(line2,SIZE,stdin);
	fgets(line3,SIZE,stdin);
	fgets(line4,SIZE,stdin);

	printf("The total word is: %d words\n",word_count(line1)+word_count(line2)+word_count(line3)+word_count(line4));

}