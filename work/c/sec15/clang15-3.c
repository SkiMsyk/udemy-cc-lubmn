#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    int c;
    file = fopen("./txt/clang15-2.txt", "r");
    if (file == NULL) {
        printf("can not open");
        exit(1);
    }

    while ((c = fgetc(file)) != EOF) {
        printf("%c", (char)c);
    }
    fclose(file);
}