#include<stdio.h>
void BubbleSort(int array[],int size){
	int i;
	int j;
	int n=size;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int main(void){
	int array[] = {10,30,40,50,60,80,70,20};
	int size =8;
	
    BubbleSort(array, size);   

    printf("Array after sorting:\n");
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
	return 0;
}
