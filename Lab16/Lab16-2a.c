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

void concatenate(struct Node *head1,struct Node *head2){
	struct Node *current1 = head1;
	struct Node *current2 = head2;

	while(current1->next!=NULL){
		current1=current1->next;
	}
	current1->next=head2;
}

void printList(struct Node *node){
	while(node!=NULL){
		printf(" %d ", node->data);
		node = node->next;
	}
}
int main(){
	int num;
	struct Node* head_1 = NULL;
	struct Node* head_2 = NULL;
	for(int i=0; i<10;i++){
		printf("insert a number for list 1: ");
		scanf("%d",&num);
		insert(&head_1,num);
	}
	for(int i=0; i<10;i++){
		printf("insert a number for list 2: ");
		scanf("%d",&num);
		insert(&head_2,num);
	}
	printf("List 1: ");
	printList(head_1);
	printf("\n");
	printf("List 2: ");
	printList(head_2);
	concatenate(head_1,head_2);
	printf("\n");
	printList(head_1);


}