#include <stdio.h>

void oneD(int a[5], int i) {
    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
}

void multiD(int array[3][3]) {
    printf("Before : %d\n", array[0][1]);
    array[0][1] = 100;
    printf("After  : %d\n", array[0][1]);
}

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    oneD(arr, 5);

    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    multiD(mat);

    return 0;
}

