#include <stdio.h>

void main() {
    int a;
    printf("input number : ");
    scanf("%d", &a);
    if (a>0) {
        printf("the number you input is positive \n");
    } else if (a == 0) {
        printf("the number you input is zero \n");
    } else {
        printf("the number you input is negative \n");
    }
}