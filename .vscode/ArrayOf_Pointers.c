#include<stdio.h>
int main(){
	
	int arr[3] = {10,20,30};
	int*ptr[3];
	int i;
	for(i=0; i<3; i++){
		ptr[i] = &arr[i];
	}
	for(i=0; i<3; i++){
		printf("%d\n",*ptr[i]);
	}
	return 0;
}
