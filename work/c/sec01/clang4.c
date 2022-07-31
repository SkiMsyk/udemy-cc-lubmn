#include <stdio.h>

void main()
{
    int a = 6;
    int b = 3;
    int add, sub;
    double avg;
    add = a + b;
    sub = a - b;
    avg = (a+b)/2.0;
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("average of %d and %d: %f\n", a, b, avg);
}
