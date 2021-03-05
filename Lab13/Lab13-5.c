#include <stdio.h>

struct address_t{
	int xx;
	int yy;
	int zz;
	int mm;
	char nickname[10];
};

int main(){
	struct address_t address[100];
	int i=0;
	int flag=1;
	printf("Enter an address:\n");
	scanf("%d.%d.%d.%d",&address[i].xx,&address[i].yy,&address[i].zz,&address[i].mm);
	printf("Enter the nickname:\n");
	scanf("%s",address[i].nickname);
	char *nonePtr = "none";
	//to determine 0.0.0.0
	if((address[i].xx==0)&&(address[i].yy==0)){
		if((address[i].zz==0)&&(address[i].mm==0)){
			flag=0;
		}
	}
	if((flag==0)||(address[i].nickname==nonePtr)){
		printf("Senitel to end satisfied\n");
	}
	else{
		i++;
		while(!(flag==0)||(address[i].nickname==nonePtr)){
			printf("Enter an address:\n");
			scanf("%d.%d.%d.%d",&address[i].xx,&address[i].yy,&address[i].zz,&address[i].mm);
			printf("Enter the nickname:\n");
			scanf("%s",address[i].nickname);
			if((address[i].xx==0)&&(address[i].yy==0)){
				if((address[i].zz==0)&&(address[i].mm==0)){
					flag=0;
				}

			}
			i++;
		}
	}
	for(int k=0;k<i;k++){
		printf("%d.%d.%d.%d\t\t%s",address[k].xx,address[k].yy,address[k].zz,address[k].mm,address[k].nickname);
		printf("\n");
	}

	for(int j=0;j<i;j++){
		for(int l=j+1;l<i;l++){
			if((address[j].xx)==(address[l].xx)){
				if((address[j].yy)==(address[j].yy)){
					printf("Machine %s and %s are on the same local network\n",address[j].nickname,address[l].nickname);
				}
			}
		}
	}
}