#include <stdio.h>

double avg(double, double);

void main() {
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 2.7;

    d1 = avg(a,b);
    d2 = avg(4.1,5.7);
    d3 = avg(c, 2.8);

    printf("d1 = %f\n", d1);
    printf("d2 = %f\n", d2);
    printf("d3 = %f\n", d3);
}

double avg(double l, double m) {
    double r = (l+m)/2.0;
    return r;
}