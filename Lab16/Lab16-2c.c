
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

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

void printList(struct Node *node){
	while(node!=NULL){
		printf(" %d ", node->data);
		node = node->next;
	}
	printf("\n");
}

void MoveNode(struct Node** destRef, struct Node** sourceRef) 
{ 
    struct Node* newNode = *sourceRef; 
    assert(newNode != NULL); 
    *sourceRef = newNode->next; 
    newNode->next = *destRef; 
    *destRef = newNode; 
} 


struct Node *merge(struct Node *a,struct Node *b){
	struct Node dummy;
	struct Node *tail = &dummy;
	dummy.next = NULL;
	while(1){
		if(a==NULL){
			tail->next=b;
			break;
		}
		else if(b==NULL){
			tail->next=a;
			break;
		}
		if(a->data<=b->data){
			MoveNode(&(tail->next),&a);
		}
		else{
			MoveNode(&(tail->next),&b);
		}
		tail=tail->next;
	}
	return(dummy.next);
}

struct Node *reverse(struct Node *a){
	struct Node *dummy=NULL;
	struct Node *current = a;
	
	while(current->next!=NULL){
		current=current->next;
	}

	while(current!=NULL){
		append(&dummy,current->data);
		current=current->prev;
	}
	
	return(dummy);

}

void make_sure_prev(struct Node* head){
	while(head->next!=NULL){
		head->next->prev=head;
		head=head->next;
	}
}

int main(){
	int num;
	struct Node* head_1 = NULL;
	struct Node* head_2 = NULL;
	struct Node* head_3 = NULL;
	while(num!=-1){
		printf("insert a number for list 1 (-1 to end): ");
		scanf("%d",&num);
		if(num!=-1){
			append(&head_1,num);
		}
	}
	printList(head_1);


	num=0;
	while(num!=-1){
		printf("insert a number for list 2 (-1 to end): ");
		scanf("%d",&num);
		if(num!=-1){
			append(&head_2,num);
		}		
	}
	printList(head_2);
	head_3 = merge(head_1,head_2);
	printf("\n");
	printf("Merged list:\n");
	printList(head_3);
	make_sure_prev(head_3); 

	struct Node* reversed_head3 = NULL;
	reversed_head3=reverse(head_3);
	printList(reversed_head3);

}
