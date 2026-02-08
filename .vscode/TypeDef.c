#include<stdio.h>
#include<string.h>

typedef struct personDetails{
	int id;
	char name[100];
	int age;
}person;
int main(){
	person p;
	p.id = 101;
	strcpy(p.name,"Vignesh");
	p.age=19;
	printf("The person name is : %d\n",p.id);
	printf("The person name is : %s\n",p.name);
	printf("The person name is : %d\n",	p.age);
	
	
	return 0;
	
}
