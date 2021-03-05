#include <stdio.h>
#include <stdlib.h>

struct Node{
	char ch;
	struct Node *next;
};

void insertWords(struct Node **head_ref, char character){
	if(head_ref==NULL) {
    struct Node *new_node=(struct Node *) malloc (sizeof(struct Node));
    *(head_ref)=new_node;
    new_node->ch=character;
    new_node->next=NULL;
}
else{
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->ch = character ;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

	
}

void reverseprint(struct Node *head){
	if(head==NULL){
		return;
	}
	reverseprint(head->next);
	printf("%c",head->ch);

}

void printList(struct Node *node){
	while(node!=NULL){
		printf("%c", node->ch);
		node = node->next;
	}
}


int main(){
	char c;
	struct Node *head=NULL;
	printf("Enter a string: \n");
	while((c=getchar())!='\n'){
		insertWords(&head,c);
	}
	//reverseprint(head);
	//printf("\n");
	printList(head);

}