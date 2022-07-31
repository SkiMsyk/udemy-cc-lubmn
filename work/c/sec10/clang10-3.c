#include <stdio.h>

void main() {
    unsigned char i = 0xf;  // 00001111
    unsigned char j = 0xff; // 11111111

    printf("%x << 1 = %x\n", i, i << 1); // 00001111 -> 00011110 = 0x1e0
    printf("%x >> 1 = %x\n", i, i >> 1); // 00000000 -> 00000111 = 0x7

    printf("%x | %x = %x\n", i, j, i | j); // 00001111 or  11111111 = 11111111
    printf("%x & %x = %x\n", i, j, i & j); // 00001111 and 11111111 = 00001111

    printf("~%x = %x\n", i, (unsigned char)~i); // not 00001111 = 11110000 = 0xf0
}