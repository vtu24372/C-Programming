#include<stdio.h>
#include<stdlib.h>

int rear=-1;
int front=-1;
int queue[5];

void enqueue(int item){
	if((front==-1)&&(rear==-1)){
	front =0;
	rear =0;
	queue[rear]=item;
	} else if((rear+1)&5==front){
	printf("The queue is full\n");
	} else{
		rear = (rear+1)%5;
		queue[rear]=item;	
	}
}

void dequeue(){
	if((front==-1)&&(rear==-1)){
	printf("The queue is full\n");
} else if(front==rear){
	printf("The dequed elements are : %d\n",queue[front]);
	front =-1;
	rear=-1;
}
else{
	printf("The dequed elements are : %d\n",queue[front]);
	front =(front+1)%5;
}	
}

void display(){
	int i;
	if((front==-1)&&(rear==-1)){
	printf("The queue is full\n");
} else{
	printf("The elemets are : %d\n");
	while(i<rear){
		printf("%d\n",queue[i]);
		i=(i+1)%5;		
	}
}
	
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
	
	return 0;
}
