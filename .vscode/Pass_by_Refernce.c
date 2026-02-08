#include<stdio.h>
void reference(int num){
	num=10;
	printf("The value of num : %d\n",num);
}
void pass(int *a){
	*a=30;
	printf("The value of a : %d\n",*a);
}
int main(){
	int n = 20;
	reference(n);
	pass(&n);
	printf("The value of n :%d\n",n);
	return 0;
	
}
