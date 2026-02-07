#include<stdio.h>

struct details{
	int id;
	char name[50];
};
int main(){
	struct details p1 ={11,"vicky"
	};
	struct details p2 ={22,"virat"
	};
	struct details p3 = p2;
	
	printf("%d" " %s\n",p1.id,p1.name);
	printf("%d " "%s\n",p2.id,p2.name);
	printf("%d %s\n",p3.id,p3.name);
	return 0;
}
