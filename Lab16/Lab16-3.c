#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

// if you want to change something inside main you need to call by reference(*)
//()this does matter
void push(struct Node **head_ref, int new_data){
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	if((*head_ref)!=NULL){
		(*head_ref)->prev=new_node;
	}
	(*head_ref)= new_node;
}

void append(struct Node **head_ref, int new_data){
	struct Node *current = *head_ref; 
	if(*head_ref==NULL){
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->data = new_data;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head_ref = new_node;
	}
	else{

		while(current->next!=NULL){
			current = current->next;
		}
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->data = new_data;
		new_node->prev = current;
		new_node->next = NULL;
		current->next = new_node;
	}

}

void delete(struct Node **head_ref, int key){
	struct Node *temp = *head_ref;
	struct Node *previous = *head_ref;

	if((temp!=NULL)&&(temp->data == key)){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	while((temp!=NULL)&&(temp->data!=key)){
		previous=temp;
		temp=temp->next;
	}
	if (temp==NULL){
		return;
	}
	previous->next=temp->next;
	free(temp);

}

void printList(struct Node *node){
	struct Node *current = node;
	while(current!=NULL){
		printf(" %d ", current->data);
		current = current->next;
	}
}

void lookback(struct Node *node){
	struct Node *current = node;
	while(current->next!=NULL){
		current=current->next;
	}
	while(current!=NULL){
		printf(" %d ", current->data);
		current = current->prev;
	}
}
int count_list(struct Node *node){
	struct Node *current = node;
	int count=1;
	while(current->next!=NULL){
		current=current->next;
		count++;
	}
	return count;
}

void printList_pos(struct Node *node,int pos){
	struct Node *current = node;
	for(int i=1;i<pos;i++){
		current=current->next;
	}
	while(current!=NULL){
		printf(" %d ", current->data);
		current = current->next;
	}
}

void lookback_pos(struct Node *node,int pos){
	struct Node *current = node;
	for(int i=1;i<pos;i++){
		current=current->next;
	}
	while(current!=NULL){
		printf(" %d ", current->data);
		current = current->prev;
	}
}

void inesertpos(struct Node **node,int pos,int data){
	struct Node *current=*node;

	for(int i=1;i<pos;i++){
		current=current->next;
	}
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next=current->next;
	current->next=new_node;
	new_node->prev=current;
	//not current;
	new_node->next->prev=new_node;

}



void instruction(void){
	printf("1: insert at beginning\n");
	printf("2: insert at End\n");
	printf("3: delete a key\n");
	printf("4: display list\n");
	printf("5: insert at position\n");
	printf("0: to end\n");

}



int main(){
	int num,key,pos,direc;
	int lenght;
	struct Node* head=NULL;;
	instruction();
	scanf("%d",&num);
	while(num!=0){
		switch(num){
			case 1:
				printf("push a number:\n");
				scanf("%d",&key);
				push(&head,key);
				printList(head);
				break;
			case 2:
				printf("append a number:\n");
				scanf("%d",&key);
				append(&head,key);
				printList(head);
				break;
			case 3:
				printf("delete a number:\n");
				scanf("%d",&key);
				delete(&head,key);
				printList(head);
				break;
			case 4:
				printf("display a number from position:\n");
				scanf("%d",&pos);
				lenght = count_list(head);
				printf("LENGHT: %d\n",lenght);
				if((pos>lenght)&&(lenght>1)){
					printf("out of range\n");
					break;
				}

				printf("1:onwards 2:backwards\n");
				scanf("%d",&direc);
				if(direc==1){
					printList_pos(head,pos);
					break;
				}
				if(direc==2){
					lookback_pos(head,pos);
					break;
				}
			case 5:
			printf("insert at position:\n");
			scanf("%d",&pos);
			printf("Number:\n");
			scanf("%d",&num);
			inesertpos(&head,pos,num);
			printList(head);
			break;
		}
		printf("\n");
		printf("--------------------------------\n");
		instruction();
		scanf("%d",&num);
	}
}