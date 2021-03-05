#include <stdio.h>
int main(){
	int pairs;
	printf("Enter the number of value-pairs >>\n");
	scanf("%d",&pairs);
	int arr[pairs][2];
	for(int i=0;i<pairs;i++){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	int temp,temp2;
	//row
	for(int k=0;k<pairs;k++){
		for(int j=0;j<pairs-1;j++){
			if((arr[j][0]<arr[j+1][0])||((arr[j][1]<arr[j+1][1])&&(arr[j][0]==arr[j+1][0]))){
				temp=arr[j+1][0];
				arr[j+1][0]=arr[j][0];
				arr[j][0]=temp;

				temp2=arr[j+1][1];
				arr[j+1][1]=arr[j][1];
				arr[j][1]=temp2;

			}
		}
	}
		
	
	for(int p=0;p<pairs;p++){
		for(int g=0;g<=1;g++){
			printf("%d ",arr[p][g]);
		}
	printf("\n");
	}
}