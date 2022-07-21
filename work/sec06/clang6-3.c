#include <stdio.h>

void main() {
    printf("start while loop\n");
    int i = 0;
    while (i <= 5) {
        if (i != 0){
            printf(" -> ");
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");
}