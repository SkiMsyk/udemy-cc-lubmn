#include <stdio.h>

int global = 10;

void f1(double, int);
void f2();

void main() {
    double a = 123.41;
    int b = 100;
    printf("main is processing...");
    printf("global = %d\n", global);
    printf("a = %f, b = %d\n", a, b);
    printf("---------------------\n");

    f1(1, 6);
    f2();
}

void f1(double a, int b) {
    printf("main is processing...");
    printf("global = %d\n", global);
    printf("a = %f, b = %d\n", a, b);
    printf("---------------------\n");
}

void f2() {
    double a = 10;
    int b = 30;
    printf("main is processing...");
    printf("global = %d\n", global);
    printf("a = %f, b = %d\n", a, b);
    printf("---------------------\n");
}