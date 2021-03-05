#include <stdio.h>

void merge(float arr1[],float arr2[],float arr3[],int l1,int l2,int l3){
	int i=0,j=0,k=0;
	while((i<l1)&&(j<l2)){
		if(arr1[i]<arr2[j]){
			arr3[k++]=arr1[i++];
		}
		else{
			arr3[k++]=arr2[j++];
		}
	}
	while(i<l1){
		arr3[k++]=arr1[i++];
	}
	while(j<l2){
		arr3[k++]=arr2[i++];
	}

}

int main(){
	int l1,l2;
	float arr1[]={-12,-7.65,-2.4,0,1.18,7.92,12.888,24.23};
	float arr2[]={-13.5,-1.423,0.023,1.0112,2.5};
	l1 = sizeof(arr1)/sizeof(arr1[0]);
	l2 = sizeof(arr2)/sizeof(arr2[0]);

	int l3 = l1+l2;
	float arr3[l3];
	merge(arr1,arr2,arr3,l1,l2,l3);
	for(int i=0;i<l3;i++){
		printf("%f ",arr3[i]);
	}




	



}