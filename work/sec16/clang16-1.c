#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 10
#define LENGTH 50
#define MESSAGE_LENGTH 25

enum ERROR {
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct {
    int id;
    char name[LENGTH];
} student;

int num = 0;
student student_db[MAX_STUDENT];

int Error;

void initDB();
int add(int, char*);
student* get(int);
void showStudentData(student*);
void showError();

void main() {
    int i;
    char names[][LENGTH] = { "Yamada", "Ohta", "Oyama", "Yamaguchi" };
    int ids[] = { 1,2,2,3 };
    initDB();

    for(i=0;i<4;i++) {
        add(ids[i], names[i]);
        printf("Register: %d %s\n", ids[i], names[i]);
        showError();
    }

    for(i=0;i<4;i++) {
        showStudentData(get(i+1));
    }
}

void initDB() {
    int i;
    for(i=0;i<MAX_STUDENT;i++) {
        student_db[i].id = -1;
        strcpy(student_db[i].name, "");
    }
    Error = MESSAGE_OK;
    num = 0;
}

int add(int id, char* name) {
    printf("get(%d) == NULL : %x \n", id, get(id) == NULL);
    if (get(id) == NULL && num < MAX_STUDENT) {
        student_db[num].id = id;
        strcpy(student_db[num].name, name);
        num++;
        Error = MESSAGE_OK;
        return 1;
    }
    Error = MESSAGE_ERROR;
    return 0;
}

student* get(int id) {
    int i;
    for(i=0;i<num;i++) {
        if (student_db[i].id == id) {
            return &student_db[i];
        }
    }
    return NULL;
}

void showStudentData(student* data) {
    if(data != NULL) {
        printf("student id: %d\tname: %s\t\n", data->id, data->name);
    } else {
        printf("id is not found");
    }
}

void showError() {
    switch(Error) {
        case MESSAGE_OK:
            printf("OK!\n");
            break;
        case MESSAGE_ERROR:
            printf("Error!\n");
            break;
    }
}