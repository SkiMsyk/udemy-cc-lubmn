#include <stdio.h>

void main() {
    int i;
    for (i=1; i<=10; i += 3) {
        if (i != 1) {
            printf(" -> ");
        }
        printf("%d", i);
    }
    printf("\n");
}