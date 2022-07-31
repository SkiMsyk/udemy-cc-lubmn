#include <stdio.h>
#include <string.h>
#include "studentDatabase.h"

static int num = 0;
static student student_db[MAX_STUDENT];

int Error = MESSAGE_OK;

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