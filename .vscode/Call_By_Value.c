#include<stdio.h>
void call(int num){
num*=10;
printf("The value in Call %d\n",num);
}
int main(){
	int data = 20;
	call(data);
	printf("The value in main %d",data);
	return 0;
}
