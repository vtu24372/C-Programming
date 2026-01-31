#include<stdio.h>
int main(){
	int A;
	int age;
	printf("Enter the value for A:");
	scanf("%d",&A);
	printf("Enter the Age:");
	scanf("%d",&age);
	if(A%2==0){
		printf("The input is Even");
	} else if(A%3==0){
		printf("The input is Odd");
	} else{
		printf("The value is zero");
	}
	if(age<18){
		printf("You are eligible to vote");
	} else{
		printf("You are not eligible to vote");	
	}
	return 0;
}
