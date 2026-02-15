#include<stdio.h>
int rear = -1;
int front = -1;
int items[5];

void enqueue(int value){
    if(rear == 4){
        printf("The queue is full");
    } else{
        if(front == -1){
            front = 0;
        }
        rear++;
        items[rear] = value;
        printf("\nThe inserted value is: %d", value);
    }
}
 
void dequeue(){
    if(front == -1){
        printf("\nThe queue is Empty");
    } else{
        printf("\nThe deleted value is: %d", items[front]);
        front++;
        if(front > rear){
            front = rear = -1;
        }
    }
}

void print(){
    if(rear == -1){
        printf("\nThe queue is empty");
    } else{
        printf("\n The queue elements are: \n");
        int i;
        for(i = front; i <= rear; i++){
            printf("The element %d: %d\n", i, items[i]);
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    print();
    dequeue();
    print();
    return 0;
}

