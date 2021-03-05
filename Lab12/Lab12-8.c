#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

enum words{article,noun,verb,preposition};

int main(){
	char *article[]={"The","A","One","Some","Any"};
	char *noun[]={"boy","girl","dog","town","car"};
	char *verb[]={"drove","jumped","ran","walked","skipped"};
	char *preposition[]={"to","from","over","under","on"};
	char sentencePtr[100];
	strcpy(sentencePtr,"");
	srand(time(NULL));
	//article
	for(int i=0;i<20;i++){
		strcpy(sentencePtr,"");
		switch(rand()%5){
		case 0:
				strcat(sentencePtr,article[0]);
				break;
		case 1:
				strcat(sentencePtr,article[1]);
				break;
		case 2:
				strcat(sentencePtr,article[2]);
				break;
		case 3:
				strcat(sentencePtr,article[3]);
				break;
		case 4:
				strcat(sentencePtr,article[4]);
				break;

	}
	strcat(sentencePtr," ");
	//noun
	switch(rand()%5){
		case 0:
				strcat(sentencePtr,noun[0]);
				break;
		case 1:
				strcat(sentencePtr,noun[1]);
				break;
		case 2:
				strcat(sentencePtr,noun[2]);
				break;
		case 3:
				strcat(sentencePtr,noun[3]);
				break;
		case 4:
				strcat(sentencePtr,noun[4]);
				break;

	}
	strcat(sentencePtr," ");
	//verb
	switch(rand()%5){
		case 0:
				strcat(sentencePtr,verb[0]);
				break;
		case 1:
				strcat(sentencePtr,verb[1]);
				break;
		case 2:
				strcat(sentencePtr,verb[2]);
				break;
		case 3:
				strcat(sentencePtr,verb[3]);
				break;
		case 4:
				strcat(sentencePtr,verb[4]);
				break;
	}
	strcat(sentencePtr," ");
	//preposition
	switch(rand()%5){
		case 0:
				strcat(sentencePtr,preposition[0]);
				break;
		case 1:
				strcat(sentencePtr,preposition[1]);
				break;
		case 2:
				strcat(sentencePtr,preposition[2]);
				break;
		case 3:
				strcat(sentencePtr,preposition[3]);
				break;
		case 4:
				strcat(sentencePtr,preposition[4]);
				break;
	}
	strcat(sentencePtr,".");
		printf("%s",sentencePtr);
		printf("\n");
	}
	
	

}	

