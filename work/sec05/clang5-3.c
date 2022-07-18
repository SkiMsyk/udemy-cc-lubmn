#include <stdio.h>

void main() {
    int num;
    printf("please input number between from 1 to 3\n");
    scanf("%d", &num);
    switch(num) {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        default:
            printf("invalid number\n");
            break;
    }
}