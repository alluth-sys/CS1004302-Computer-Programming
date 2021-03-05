#include <stdio.h>
int main(){
	int matrix1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int matrix2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	int result[3][3];
	int num=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					num +=matrix1[i][k]*matrix2[k][j];
			}
			result[i][j]=num;
			num=0;
		}
	}
	for(int j=0;j<3;j++){
		for(int y=0;y<3;y++){
			printf("%d ",result[j][y]);
		}
		printf("\n");
	}
	

}