#include<stdio.h>
#include<string.h>
union unionVariables{
	int data;
	char value[100];
};
int main(){
	union unionVariables u;
	u.data = 10;
	strcpy(u.value,"Hello");
	printf("%s\n",u.value);
	printf("%d\n",u.data);
 	return 0;
}
