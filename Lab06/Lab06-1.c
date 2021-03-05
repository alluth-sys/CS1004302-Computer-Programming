#include <stdio.h>

int triangle(float a,float b,float c);
int main(){
	float x,y,z;
	printf("Enter 3 sides of triangle\n");
	scanf("%f%f%f",&x,&y,&z);
	if(triangle(x,y,z)){
		printf("Yes\n");	
	}
	else{
		printf("No\n");
	}

}

int triangle(float a,float b,float c){
	//int greatest = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
		return 1;
	}
	else{
		return 0;
	}
}