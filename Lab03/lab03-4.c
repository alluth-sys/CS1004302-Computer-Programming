#include <stdio.h>
int main(){
	int nums[10],i,k,t;
	for(i=0;i<10;i++){
		printf("Enter num%d",i);
		scanf("%d",&nums[i]);	
	}
	for(i=0;i<2;i++){
		for(k=8;k>=0;k--){
			if (nums[k]<nums[k+1]){
				t = nums[k];
				nums[k] = nums[k+1];
				nums[k+1] = t;
			}


		}
	}
	printf("%d %d\n",nums[0],nums[1] );
}