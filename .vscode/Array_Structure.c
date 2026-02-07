#include<stdio.h>

struct person_info{
	char name[100];
	int age;
};
int main(){
	struct person_info p[5];
	
	int i;
	for(i=0; i<5; i++){
	printf("\n Enter the name : \n");
	scanf("%s",&p[i].name);
	printf("\n Enter the age : \n");
	scanf("%s",&p[i].age);
		}
		
	printf("The personal details are :\n");
	for(i=0; i<5; i++){
		printf("Name:%s and Age:%d \n",p[i].name,p[i].age);
	}
	return 0;
}
