#include<stdio.h>
#include<string.h>
struct person{
	int id;
	char name[100];
};
struct info{
	int age;
	struct person p1;
};
int main(){
	struct info p;
	p.p1.id = 11;
	strcpy(p.p1.name, "vicky");  
	p.age = 18;
	
	printf("%d\n",p.p1.id);
	printf("%s\n",p.p1.name);
	printf("%d\n",p.age);
	return 0;
}
