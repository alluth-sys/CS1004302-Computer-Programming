#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void insert(struct Node **head_ref, int new_data){
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(struct Node *node){
	while(node!=NULL){
		printf(" %d ", node->data);
		node = node->next;
	}
}

void reverseprint(struct Node *head){
	if(head==NULL){
		return;
	}
	reverseprint(head->next);
	printf("%d ",head->data);

}


int main(){
	int num;
	struct Node* head = NULL;
	for(int i=0; i<10;i++){
		printf("insert a number: ");
		scanf("%d",&num);
		insert(&head,num);
	}
	printList(head);
	//printf("reversed: \n");
	//reverseprint(head);

}