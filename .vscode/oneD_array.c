#include<stdio.h>
int main(){
int n[5] ={1,2,3,4};
printf("%d\n",n[3]);
n[3] = 5;
printf("%d\n",n[3]);

int i;
for(i=0; i<4; i++){
	printf("%d\n",n[i]);
}
return 0;
}
