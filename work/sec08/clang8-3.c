#include <stdio.h>

// prototype
int max(int, int);
void show(int);
void line();

void main() {
    int n1, n2;
    printf("please input first number: ");
    scanf("%d", &n1);
    printf("please input second number: ");
    scanf("%d", &n2);
    line();
    show(n1);
    show(n2);
    printf("The greater number is %d. \n", max(n1, n2));
    line();
}

int max(int a, int b) {
    if ( a > b ) {
        return a;
    } else {
        return b;
    }
}

void show(int x) {
    printf("value : %d\n", x);
    return ;
}

void line() {
    printf("-----------\n");
}