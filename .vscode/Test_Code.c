#include<stdio.h>
void callArray(int array[5]){
	int i;
	for(i=0; i<=5; i++){
		printf("The values are : %d\n", array[i]);
	}
}

int main(){
	int array[5]={5,10,15,25,30};
	callArray(array);
	return 0;
	
}
