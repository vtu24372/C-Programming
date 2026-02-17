#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void printList(struct node*node){
	while(node!=NULL){
		printf("%d\n",node->data);
		node=node->next;
	}
}
int main(){
	struct node*head=NULL;
	struct node*first=NULL;
	struct node*second=NULL;
	struct node*third=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=first;
	
	first->data=20;
	first->next=second;
	
	second->data=30;
	second->next=third;
	
	third->data=40;
	third->next=NULL;
	
	printList(head);
	
	return 0;
}
