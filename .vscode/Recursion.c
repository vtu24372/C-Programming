#include<stdio.h>
void table(int num, int i){
	if(i>0){
		printf("%d\n",num*i);
		table(num,i-1);
	} else{
		return;
	}
}
int main(){
	table(2,10);
	return 0;
}
