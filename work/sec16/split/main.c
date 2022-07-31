#include <stdio.h>
#include "dataOutput.h"
#include "dataOutput.h"

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