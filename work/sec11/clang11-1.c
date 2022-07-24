#include <stdio.h>

void main() {
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';

    printf("the value of a: %d,\t\tsize: %lu bylte, \taddress: 0x%p\n", a, sizeof(int), &a);
    printf("the value of b: %f,\tsize: %lu bylte, \taddress: 0x%p\n", b, sizeof(double), &b);
    printf("the value of c: %f,\tsize: %lu bylte, \taddress: 0x%p\n", c, sizeof(float), &c);
    printf("the value of d: %c,\t\tsize: %lu bylte, \taddress: 0x%p\n", d, sizeof(char), &d);
}