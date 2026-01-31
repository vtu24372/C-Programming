#include <stdio.h>

int main(void) {
    char A[100];
    int B;

    printf("Enter the value for A: ");
    scanf("%99s", A);   

    printf("Enter the value for B: ");
    scanf("%d", &B);   

    printf("The value of A: %s\n", A);  
    printf("The value of B: %d\n", B);

    return 0;
}

