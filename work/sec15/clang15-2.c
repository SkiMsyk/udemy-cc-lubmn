#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void main() {
    FILE *file;
    char line[SIZE];
    line[0] = "\0";
    file = fopen("./txt/clang15-2.txt", "r");
    if (file == NULL) {
        printf("file couldn't be opend\n");
        exit(1);
    }

    while (fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
}