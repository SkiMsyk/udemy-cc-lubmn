#include <stdio.h>

void main() {
    char s1[4] = { 'a', 'b', 'c', '\0'};
    char s2[] = "HelloWorld.";
    char s3[10];

    printf("please input strings: ");
    scanf("%s", s3);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
}