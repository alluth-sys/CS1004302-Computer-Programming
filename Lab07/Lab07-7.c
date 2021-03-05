#include <stdio.h> 

void TOH(int n,int A,int C,int B){
	if (n>0){
		TOH(n-1,A,B,C);
		printf("%d->%d\n",A,C);
		TOH(n-1,B,C,A);
	}
}
int main(){
	int n;
	printf("Enter Disks>>\n");
	scanf("%d",&n);
	TOH(n,1,2,3);
	return 0;
}