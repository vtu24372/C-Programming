#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *pointer;
	int n;
	n=5;

	pointer = (int *)calloc(n,sizeof(int));
	if(pointer==NULL){
		printf("Memory is not allocated\n");
		exit(0);
	}
	else{
		printf("Memory is successfully allocated\n");
		
		int i;
		for(i=1; i<n; i++){                     
			pointer[i] = pointer[i-1]+5;
		}
	}
	
	printf("The values are:\n");
	int i;
	for(i=0; i<n; i++){
		printf("%d,",pointer[i]);
	}
	free(pointer);
	printf("The memory is free\n");
	return 0;
}

