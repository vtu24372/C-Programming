#include<stdio.h>
int main(){
	int age =10;
	int a = 20;
	int*p=&a;
	int*ptr=&age;
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("The address of the a : %p and the value :%d" ,p,*p);
	
	return 0;
}
