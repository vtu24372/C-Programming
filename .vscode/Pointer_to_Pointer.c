#include<stdio.h>
int main(){
	int var=10;
	int*ptr1;
	int**ptr2;
	ptr1=&var;
	ptr2=&ptr1;
	printf("The value of var :%d\n",var);
	printf("The value of ptr1 :%d\n",*ptr1);
	printf("The value of ptr2 :%d\n",**ptr2);
	return 0;
}
