#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* prev;
	struct node* next;
};

void printListReverse(struct node* node){
	while(node!=NULL){
		printf("%d\n",node->data);
		node=node->next;
	}
}

void printList(struct node* node){
	while(node!=NULL){
		printf("%d\n",node->data);
		node=node->prev;
	}
}


int main(){
struct node* head=NULL;
struct node* first=NULL;
struct node* second=NULL;
struct node* third=NULL;

head = (struct node*)malloc(sizeof(struct node));
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));

head->data=100;
head->prev=NULL;
head->next=first;

first->data=200;
first->prev=head;
first->next=second;

second->data=300;
second->prev=first;
second->next=third;

third->data=400;
third->prev=second;
third->next=NULL;

printList(head);
printListReverse(third);

	return 0;
}
