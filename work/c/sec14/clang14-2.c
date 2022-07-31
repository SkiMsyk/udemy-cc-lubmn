#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

void main() {
    int i;
    student_data data[] = {
        { 1, "Yamada Taro", 18},
        { 2, "Sato Ryoko", 19 },
        { 3, "Ota Takashi", 18 },
        { 4, "Nakata Yuko", 18 }
    };

    for (i=0; i<4; i++) {
        printf("ID: %d\tName: %s\tAge: %d\n", data[i].id, data[i].name, data[i].age);
    }
}