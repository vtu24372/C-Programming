#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int value){
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop(){
    if(top == NULL){
        printf("No elements are there in the stack \n");
        return -1;
    } else{
        struct node* temp = top;
        int tempData = top->data;
        top = top->next;
        free(temp);
        return tempData;
    }
}

void display(){
    if(top == NULL){
        printf("No elements are there in the stack \n");
    } else{
        printf("The stack elements are :\n");
        struct node* temp = top;
        while(temp != NULL){
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    int popped = pop();
    printf("Popped: %d\n", popped);
    display();
    return 0;
}

