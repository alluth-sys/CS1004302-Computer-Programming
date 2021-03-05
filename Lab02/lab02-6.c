#include <stdio.h>
int main(){
	float x0,y0,x1,y1,x2,y2;
	printf("Enter the coordinate (x, y) for p0:\n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the coordinate (x, y) for p1:\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the coordinate (x, y) for p2:\n");
	scanf("%f%f",&x2,&y2);
	if (((x1-x0)*(y2-y0))-((x2-x0)*(y1-y0)>0))
		printf("(%.1f,%.1f) is on the left side of (%f,%f)to (%f,%f)\n",x2,y2,x0,y0,x1,y1 );
	else if (((x1-x0)*(y2-y0))-((x2-x0)*(y1-y0)<0))
		printf("(%.1f,%.1f) is on the right side of (%f,%f)to (%f,%f)\n",x2,y2,x0,y0,x1,y1 );
	else
		printf("(%.1f,%.1f) is on the line from (%f,%f)to (%f,%f)\n",x2,y2,x0,y0,x1,y1);




}
	