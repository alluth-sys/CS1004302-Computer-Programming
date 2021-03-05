#include <stdio.h>
int main(){
	float x,y;
	printf("Enter a point’s x- and y-coordinates\n");
	scanf("%f%f",&x,&y);
	if ((x+2*y<=200)&&(x>=0)&&(y>=0)){
		printf("The point is in the triangle\n");
	}
	else{
		printf("The point is not in the triangle\n");
	}
}