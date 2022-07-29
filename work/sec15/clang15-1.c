#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    file = fopen("./txt/clang15-1.txt", "w");
    if (file == NULL) {
        printf("file couldn't be opend\n");
        exit(1);
    }

    fprintf(file, "Hello World\r\n");
    fprintf(file, "ABCDEF\r\n");
    fclose(file);
}