#include<stdio.h>

int Max_Size = 10;
int stack[10];
int top = -1;

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {

    if (top == Max_Size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int peek() {

    return stack[top];
}


int pop(int data) {
    if (isEmpty()) {
        printf("The stack is Empty\n");
        return 1;          
    } else {
        data = stack[top];
        top = top - 1;
        return data;
    }
}


int push(int data) {
    if (isFull()) {
        printf("The stack is Full\n");
        return 1;          
    } else {
        top = top + 1;
        stack[top] = data;
        return 0;        
    }
}

int main() {
    int data;      

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

   
    printf("Top element = %d\n", peek());

    
    while (!isEmpty()) {
        data = pop(data);
        printf("Popped element = %d\n", data);
    }

    return 0;
}

