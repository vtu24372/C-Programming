#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Details{
	int age;
	char name[100];
};
int main(){
	struct Details *p =(struct Details *)malloc(sizeof(struct Details));
	p->age = 10;
	strcpy(p->name,"Vignesh");
	printf("The age is : %d\n",p->age);
	printf("The name is : %s\n",p->name);
	return 0;
}
