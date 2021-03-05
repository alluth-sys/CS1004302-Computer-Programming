#include <stdio.h>
int floo[50][50];
int main(){
	int draw=1;
	//0right 1down 2left 3up 
	int dir=0;
	int command=0;
	int position[]={0,0};
	while(command!=9){
		scanf("%d",&command);
		if(command==1){
			draw=0;
		}
		else if(command==2){
			draw=1;
		}
		else if(command==3){
			dir++;
			dir=dir%4;
			
		}
		else if(command==4){
			if(dir==0){
				dir=3;
			}
			else
			{
				dir--;
				dir=dir%4;
			}
		}
		else if(command==5){
			int dis=0;
			scanf(",%d",&dis);
			if(draw==1){
				if(dir==0)//right
				{
					for(int i=0;i<dis;i++){
						floo[position[0]][position[1]+i]=1;
					}
				position[1]+=dis;
					
				}
				if(dir==1)//down
				{
					for(int i=0;i<dis;i++){
						floo[position[0]+i][position[1]]=1;
					}
					position[0]+=dis;
				}
				if(dir==2)//left
				{
					for(int i=0;i<dis;i++){
						floo[position[0]][position[1]-i]=1;
					}
					position[1]-=dis;
				}

				if(dir==3)//up
				{
					for(int i=0;i<dis;i++){
						floo[position[0]-1][position[1]]=1;
					}
					position[0]-=dis;
				}
			}
		if(draw==0){
			if(dir==0){//right
				{
				position[1]+=dis;
				}
				if(dir==1)//down
				{
				position[0]-=dis;
				}
				if(dir==2)//left
				{
				position[1]-=dis;
				}
				if(dir==3)//up
				{
				position[1]+=dis;
				}
			}
		}
	}
	else if(command==6){
			for(int i=0;i<=49;i++){
				for(int j=0;j<=49;j++){
					printf("%d",floo[i][j]);
				}
				printf("\n");
			}
		}
	}	
}