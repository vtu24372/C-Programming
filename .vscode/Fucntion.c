#include<stdio.h>
void sum(int num1, int num2){
	int Addition = num1+num2;
	printf("%d\n",Addition);
}
void sub(int num1, int num2){
	int Addition = num1-num2;
	printf("%d\n",Addition);
}
void multiply(int num1, int num2){
	int Addition = num1*num2;
	printf("%d\n",Addition);
}
void divide(int num1, int num2){
	int Addition = num1/num2;
	printf("%d\n",Addition);
}
int main(){
	sum(10,20);
	sub(10,20);
	multiply(10,20);
	divide(10,20);
	return 0;
}
