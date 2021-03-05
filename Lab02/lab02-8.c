#include <stdio.h>
#include <math.h>
int main(){
	float x1,y1,x2,y2,radius1,radius2,dist_center;
	printf("Enter circle1’s center x-, y-coordinates, and radius\n");
	scanf("%f%f%f",&x1,&y1,&radius1);
	printf("Enter circle2’s center x-, y-coordinates, and radius\n");
	scanf("%f%f%f",&x2,&y2,&radius2);
	dist_center = sqrt((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
	if (dist_center<=radius1-radius2){
		printf("Circle2 is inside circle1\n");
	}
	else if (dist_center<=radius1+radius2){
		printf("Circle2 is overlap circle1.\n");
	}
	else
		printf("Circle2 does not overlap circle1.\n");
	
}