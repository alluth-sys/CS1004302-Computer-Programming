#include <stdio.h>

int main(){
	FILE *file_1Ptr;
	FILE *file_2Ptr;
	FILE *file_3Ptr;
	char str1[60];
	char str2[60];


	file_1Ptr = fopen("Lab15_1.txt","r");
	file_2Ptr = fopen("Lab15_2.txt","r");
	file_3Ptr = fopen("Lab15_3.txt","w");

	while((fgets(str1,60,file_1Ptr))!=NULL){
		fprintf(file_3Ptr,"%s\n",str1);
	}
	while((fgets(str2,60,file_2Ptr))!=NULL){
		fprintf(file_3Ptr,"%s\n",str2);
	}

	fclose(file_1Ptr);
	fclose(file_2Ptr);
	fclose(file_3Ptr);



}