#include<stdio.h>
#include<string.h>

int main(){
    FILE *filePointer;
    char data[50]="Welcome to File Ops";
    
    filePointer = fopen("test.c", "w");  
    if(filePointer == NULL){
        printf("The file failed to open\n");  
        return 1;  
    } 
    else{
        printf("The file is successfully created\n");  
        
        fputs(data, filePointer);  
        fputs("\n", filePointer);  
        
    }
    fclose(filePointer);  
    printf("The file is successfully closed\n");  
    
    return 0;
}

