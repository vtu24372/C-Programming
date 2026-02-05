#include<stdio.h>

int main(){
	char a[20] = "Hello";
	char b[20] = "Vicky";
	char str1[50] = "Welcome to c";
	char str2[50] ="";
	printf("%s\n",a);
	printf("%s\n",b);
	a[4] = "B";
	printf("%s\n",a);
	int i;
	for(i=0; i<=5; i++){
		printf("%s",a[i]);
	}

	return 0;
}
