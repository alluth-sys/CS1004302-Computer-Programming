#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node{
	char ch;
	struct Node *next;
	struct Node *prev;
};

void insertWords(struct Node **head_ref, char character){
	struct Node *current = *head_ref; 
	if(*head_ref==NULL){
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->ch = character;
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head_ref) = new_node;
	}
	else{

		while(current->next!=NULL){
			current = current->next;
		}
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->ch = character;
		new_node->prev = current;
		new_node->next = NULL;
		current->next = new_node;
	}
	
}

void printList(struct Node *node){
	while(node!=NULL){
		printf("%c", node->ch);
		node = node->next;
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

int isPalindrome(struct Node *node,int lenght){
	struct Node *current= node;
	struct Node *last= node;

	while(last->next!=NULL){
		last=last->next;
	}

	lenght/=2;
	int flag=1;

	for(int i=0;i<lenght;i++){
		if(last->ch!=current->ch){
			flag=0;
		}
		last=last->prev;
		current=current->next;
	}

	return flag;

}

int main(){
	char c;
	struct Node *head=NULL;
	printf("Enter a string: \n");
	while((c=getchar())!='\n'){
		if(!isspace(c)&&!ispunct(c))
			insertWords(&head,c);
	}
	int lenght = count_list(head);
	printf("\n");
	if(isPalindrome(head,lenght)){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

}