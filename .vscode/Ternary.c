#include<stdio.h>
int main(void){
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	(age>=18) ? printf("you are elidgible") : printf("you are not elidgible");
	return 0;
}
