#include<stdio.h>
int main(){
for(int i=0; i<=10; i++)
{
printf("%d\n",i);		
}
for(int j=10; j>=0; j--){
	printf("%d\n",j);
}
int a;
while(a<=10){
	printf("%d\n",a);
	a++;
}
int b=10;
while(b>0){
	printf("%d\n",b);
	b--;
}
int c=0;
do{
	printf("%d\n",c);
	c++;	
} while(c<=10);

return 0;
}
