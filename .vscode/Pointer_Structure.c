#include<stdio.h>
#include<string.h>
struct person{
	int age;
	char name[100];
};
int main(){
	struct person p1;
	struct person *ptr = &p1;
	strcpy(p1.name,"Vicky");
	p1.age = 18;
	printf("Name : %s\n",(*ptr).name);
	printf("Age : %d\n",(*ptr).age);
	return 0;
}
