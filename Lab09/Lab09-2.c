#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randNum(void){
	int num;
	num=(rand()%2);
	return num;
}
int main(){
	srand(time(NULL));
	int arr1[5][5];
	//randomly fills array with 1 or 0
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			arr1[i][j]=randNum();
		}
	}
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	//find row with the most 1s
	int count=0;
	int row_one_count[5];
	for(int i=0;i<=4;i++){
		count=0;
		for(int j=0;j<=4;j++){
			if(arr1[i][j]==1){
				count++;
			}
		}
		row_one_count[i]=count;
	}
	// find max in array 
	int max_row=0,row_index=0;
	for(int k=0;k<=4;k++){
			if(row_one_count[k]>max_row){
				max_row=row_one_count[k];
				row_index = k;
			}
				
		
	}
	//find column with the most 1s
	int column_count=0;
	int column_one_count[5];
	for(int i=0;i<=4;i++){
		column_count=0;
		for(int j=0;j<=4;j++){
			if(arr1[j][i]==1){
				column_count++;
			}
		}
		column_one_count[i]=column_count;
	}
	// find max in array
	int max_column=0,column_index=0;
	for(int k=0;k<=4;k++){
			if(column_one_count[k]>max_column){
				max_column=column_one_count[k];
				column_index = k;
			}
			} 



	printf("The row with most 1s is %d \n",row_index+1);
	printf("The column with most 1s is %d \n",column_index+1 );
}