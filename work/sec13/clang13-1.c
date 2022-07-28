#include <stdio.h>
#include <string.h>

void main() {
    char s[10];
    int len;

    strcpy(s, "ABC");
    printf("s = %s\n", s);

    strcat(s, "DEF");
    printf("s = %s\n", s);

    len = strlen(s);
    printf("length of s: %d\n", len);
}