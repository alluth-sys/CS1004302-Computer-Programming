#include <stdio.h>

int main(){
	FILE *master;
	FILE *transaction;
	FILE *new_mas;

	master = fopen("/Users/allu.lth/Desktop/CSIE Lab/B10815010_Lab15/oldmas.txt","r");
	transaction = fopen("/Users/allu.lth/Desktop/CSIE Lab/B10815010_Lab15/trans.txt","r");
	new_mas = fopen("/Users/allu.lth/Desktop/CSIE Lab/B10815010_Lab15/newmast.txt","w");

	int id_temp;
	double amount_temp;

	int id[100];
	double amount[100];
	int count=0;

	while(!feof(master)){
		fscanf(master,"%d %lf",&id_temp,&amount_temp);
		id[count]=id_temp;
		amount[count]=amount_temp;
		count++;
	}
	while(!feof(transaction)){
		int flag=0;
		fscanf(transaction,"%d %lf",&id_temp,&amount_temp);
		for(int i=0;i<count;i++){
			if(id[i]==id_temp){
				amount[i]+=amount_temp;
				flag=1;
			}
		}
		if(flag==0){
			printf("Unmatched transaction record for account number %d\n",id_temp);
		}
	}


	for(int i;i<count;i++){
		fprintf(new_mas,"%d %lf\n",id[i],amount[i]);
	}

	


}