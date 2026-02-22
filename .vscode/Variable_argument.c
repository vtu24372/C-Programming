#include<stdio.h>
#include<stdarg.h>

double average(int num,...){
    va_list valist;
    double sum=0.0;
    int i;
    va_start(valist,num);
    for(i=0; i<num; i++){
        sum = sum + va_arg(valist,int);   
    }
    va_end(valist);
    return sum/num;                       
}

int main(){
    printf("%f",average(6,6,8,4,6,2));    
    return 0;
}

