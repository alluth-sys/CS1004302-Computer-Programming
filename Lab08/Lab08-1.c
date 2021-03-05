#include <stdio.h>
long C(long n, long p){
	if((p==0)||(p==n)){
		return 1;
	}
	else{
		return (C(n-1,p)+C(n-1,p-1));
	}
}

int main(){
	int n,p;
	printf("Enter n and p>>\n");
	scanf("%d%d",&n,&p);
	printf("%ld\n",C(n,p));
}