#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

void main() {
    struct student data;
    data.id = 1;
    strcpy(data.name, "Yamada Taro");
    data.age = 18;

    printf("StudentID: %d\tName: %s\tAge: %d\n", data.id, data.name, data.age);
}