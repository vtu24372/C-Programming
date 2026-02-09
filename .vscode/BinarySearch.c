#include<stdio.h>
int BinarySearch(int array[], int target,int size){
	int low = 0;
	int high =size-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(array[mid]==target){
			return mid;
		} else if(array[mid]<target){
			low = mid+1;
		} else{
			high = mid-1;
		}
	}
}
int main(void){
	int array[] ={10,20,30,40,50,60,70,80};
	int size =8;
	int target = 60;
	int index = BinarySearch(array,target,size);
	if(index!=0){
		printf("The value is found %d\n",index);
	}else{
		printf("The value is not found");
	}
	return 0;
}
