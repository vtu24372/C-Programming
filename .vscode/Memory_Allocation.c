#include<stdio.h>
#include<stdlib.h>
int main(void){
	int* pointer;
	int n;
	printf("Enter the values for n :");
	scanf("%d",&n);
	printf("The values of n :%d\n",n);
	
	pointer = (int *)malloc(n*sizeof(int));
	
	if(pointer==NULL){
		printf("The memory is not allocated\n");
		exit(0);
	}
	else{
		printf("The memory is successfully allocated\n");
		
	}
	int i;
	for(i=0; i<n; i++){
		pointer[i] = i+1;
	}
	
	printf("The values of n :\n");
	for(i=0; i<n; i++){
		printf("%d ," , pointer[i]);
	}
	
	return 0;
}

