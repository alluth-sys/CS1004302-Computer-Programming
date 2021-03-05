#include <stdio.h>
int main(){
	float accelaration,velocity,length;
	printf("Enter accelaration>>\n");
	scanf("%f",&accelaration);
	printf("Enter take-off speed>>\n");
	scanf("%f",&velocity);
	length = (velocity*velocity)/(2*accelaration);
	printf("The minimum runway length for this airplane is %f meters\n",length );
}