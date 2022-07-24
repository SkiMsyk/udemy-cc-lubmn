#include <stdio.h>

void show(int, int, int);

void main() {
    int a = 100;
    int b = 200;
    int *p = NULL;

    p = &a;
    show(a, b, *p);
    *p = 300;
    show(a, b, *p);
    p = &b;
    show(a, b, *p);
    *p = 400;
    show(a, b, *p);
}

void show(int n1, int n2, int n3) {
    printf("----------------------\n");
    printf("a  = %d\nb  = %d\n*p = %d\n", n1, n2, n3);
}