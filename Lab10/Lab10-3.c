#include <stdio.h>
int main(){
	int tictac[3][3];
	int xpos1,xpos2,ypos1,ypos2;
	int counter=0;
	for(int i=0;i<3;i++)
	{
		for(int k=0;k<3;k++)
		{
			tictac[i][k]=0;
		}
	}

	int flag=1;
	int turn=1;
	while(flag==1){
			if(turn==1){
				printf("Enter a row(0,1 or 2)for player X: ");
				scanf("%d",&xpos1);
				printf("Enter a column(0,1 or 2)for player X: ");
				scanf("%d",&xpos2);
				if(tictac[xpos1][xpos2]!=2){
					tictac[xpos1][xpos2]=1;
				}
				else{
					while(tictac[xpos1][xpos2]==2){
						printf("Enter a row(0,1 or 2)for player X: ");
						scanf("%d",&xpos1);
						printf("Enter a column(0,1 or 2)for player X: ");
						scanf("%d",&xpos2);
					}
				}
				tictac[xpos1][xpos2]=1;
				/*else if((xpos1==ypos1)&&(xpos2==ypos2)){
					while((xpos1==ypos1)&&(xpos2==ypos2)){
						printf("Enter a row(0,1 or 2)for player X: ");
						scanf("%d",&xpos1);
						printf("Enter a column(0,1 or 2)for player X: ");
						scanf("%d",&xpos2);	
					}
				}*/
			}
			//printf("%d %d\n",xpos1,xpos2);
			//printf("%d\n",tictac[1][2]);

			if(turn!=1){
				printf("Enter a row(0,1 or 2)for player O: ");
				scanf("%d",&ypos1);
				printf("Enter a column(0,1 or 2)for player O: ");
				scanf("%d",&ypos2);
				if(tictac[ypos1][ypos2]!=1){
					tictac[ypos1][ypos2]=2;
				}
				else{
					while(tictac[ypos1][ypos2]==1){
						printf("Enter a row(0,1 or 2)for player O: ");
						scanf("%d",&ypos1);
						printf("Enter a column(0,1 or 2)for player O: ");
						scanf("%d",&ypos2);
					}
				}
				/*else if((xpos1==ypos1)&&(xpos2==ypos2)){
					while((xpos1==ypos1)&&(xpos2==ypos2)){
						printf("Enter a row(0,1 or 2)for player O: ");
						scanf("%d",&ypos1);
						printf("Enter a column(0,1 or 2)for player O: ");
						scanf("%d",&ypos2);
					}
				}*/
				tictac[ypos1][ypos2]=2;
			}
			

		for(int i=0;i<3;i++){
			printf("---------------\n|");
			for(int k=0;k<3;k++){
				if(tictac[i][k]==1)
					printf("X|");
				else if(tictac[i][k]==2)
					printf("O|");
				else if(tictac[i][k]==0)
					printf(" |");
				}printf("\n");

			}
		if((tictac[0][0]==tictac[0][1])&&(tictac[0][1]==tictac[0][2])&&(tictac[0][0]!=0)){
			if(tictac[0][0]==1)
				printf("Player X wins\n");
			else if(tictac[0][0]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[1][0]==tictac[1][1])&&(tictac[1][1]==tictac[1][2])&&(tictac[1][0]!=0)){
			if(tictac[1][0]==1)
				printf("Player X wins\n");
			else if(tictac[1][0]==2)
				printf("Player O wins\n");
			flag=0;
		}
			
		if((tictac[2][0]==tictac[2][1])&&(tictac[2][1]==tictac[2][2])&&(tictac[2][0]!=0)){
			if(tictac[2][0]==1)
				printf("Player X wins\n");
			else if(tictac[2][0]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[0][0]==tictac[1][0])&&(tictac[2][0]==tictac[1][0])&&(tictac[1][0]!=0)){
			if(tictac[0][1]==1)
				printf("Player X wins\n");
			else if(tictac[0][1]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[0][1]==tictac[1][1])&&(tictac[2][1]==tictac[1][1])&&(tictac[1][1]!=0)){
			if(tictac[1][1]==1)
				printf("Player X wins\n");
			else if(tictac[1][1]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[0][2]==tictac[1][2])&&(tictac[2][2]==tictac[1][2])&&(tictac[1][2]!=0)){
			if(tictac[0][2]==1)
				printf("Player X wins\n");
			else if(tictac[0][2]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[0][0]==tictac[1][1])&&(tictac[2][2]==tictac[0][0])&&(tictac[0][0]!=0)){
			if(tictac[0][0]==1)
				printf("Player X wins\n");
			else if(tictac[0][0]==2)
				printf("Player O wins\n");
			flag=0;
		}
		if((tictac[0][2]==tictac[1][1])&&(tictac[2][0]==tictac[0][2])&&(tictac[0][2]!=0)){
			if(tictac[0][2]==1)
				printf("Player X wins\n");
			else if(tictac[0][2]==2)
				printf("Player O wins\n");
			flag=0;
		}
		
		counter++;
		//printf("%d\n",counter);
		if(counter==9){
					printf("It's a draw\n");
					flag=0;
				}

		turn++;
		turn=turn%2;
	}
}