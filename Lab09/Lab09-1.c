#include <stdio.h>
int main(){
	int arr1[5],arr2[5];
	printf("Enter numbers for array 1:\n");
	for(int k=0;k<=4;k++){
		scanf("%d",&arr1[k]);
	}
	printf("Enter numbers for array 2\n");
	for(int k=0;k<=4;k++){
		scanf("%d",&arr2[k]);
	}
	int num=0;

	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			if(arr1[i]==arr2[j]){
				num=arr1[i];
				printf("the intersection is %d\n",num);
			}	
		}
	}

}