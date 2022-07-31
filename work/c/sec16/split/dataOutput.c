#include "dataOutput.h"
#include <stdio.h>
#include <string.h>

extern int Error;

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