#include<stdio.h>
void Addition(int num1, int num2){
	int sum=num1+num2;
	printf("The sum is : %d",sum);
}
int main(void){
	void (*ptr)(int,int) = Addition;
	ptr(100,200);
	return 0;
}
