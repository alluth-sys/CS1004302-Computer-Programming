#include<stdio.h>
#include<math.h>
float roots(int a, int b,int c);
int main(){
	float ans1,ans2;
	int x,y,z,a,b,c;
	printf("Enter coeffient a,b,c>>\n");
	scanf("%d%d%d",&x,&y,&z);
	if(roots(x,y,z)){
		ans1 = (-y+sqrt(y*y-4*x*z))/(2*x);
		ans2 = (-y-sqrt(y*y-4*x*z))/(2*x);
		printf("Real\n");
		if(ans1==ans2){
			printf("roots are :%f \n",ans1);		
		}
		else{
			printf("roots are :%f and %f\n",ans1,ans2);
		}

	}
	else{
		printf("Imaginary\n"); 
	}


}
float roots(int a, int b,int c){
	if((b*b-4*a*c)>=0){
		return 1;
	}
	else{
		return 0;
	}
}