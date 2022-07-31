#include <stdio.h>

void main() {
    int dice;
    printf("please input number between from 1 to 6: ");
    scanf("%d", &dice);
    if (1 <= dice && dice <=6) {
        if (dice == 2 || dice == 4 || dice ==6) {
            printf("even number\n");
        } else {
            printf("odd number\n");
        }
    }
    else {
        printf("input number is outside of the range.\n");
    }
}