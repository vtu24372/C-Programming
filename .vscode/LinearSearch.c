#include<stdio.h>
void LinearSearch(int array[], int size, int target){
	int i;
	for(i=0; i<size; i++){
		if(array[i]==target){
			printf("The value is found :%d\n",i);
			return;
		}
	}
	printf("The value is not found");
}
int main(){
	int array[] ={10,20,40,50,60};
	int size =5;
	int target = 50;
	LinearSearch(array,size,target);
	return 0;
}
