#include <stdio.h>

int main(void) {
    enum {
        Sun = 1,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };
    int i;

    for (i = Sun; i <= Sat; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

