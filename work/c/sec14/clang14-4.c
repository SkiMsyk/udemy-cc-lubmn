#include <stdio.h>

typedef struct {
    int a;
    double d;
} num_data;

void dealData1(num_data data); // pass value 
void dealData2(num_data* pdata); // pass pointer

void main() {
    num_data n1 = { 1, 1.2 }, n2 = { 1, 1.2 };
    printf("n1 address: 0x%x\tn2 address:0x%x\n", (unsigned int)&n1, (unsigned int)&n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d\tn1.d=%f\n", n1.a, n1.d);
    printf("n2.a = %d\tn2.d=%f\n", n2.a, n2.d);
}

void dealData1(num_data data) {
    printf("a=%d\td=%f\n", data.a, data.d);
    printf("address: 0x%x\n", (unsigned int)&data);

    data.a = 2;
    data.d = 2.4;
}

void dealData2(num_data* pData) {
    printf("a=%d\td=%f\n", pData->a, pData->d);
    printf("address: 0x%x\n", (unsigned int)pData);

    pData->a = 2;
    pData->d = 2.4;
}
