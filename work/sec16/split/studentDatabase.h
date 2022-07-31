#ifndef _STUDENT_DATABOSE_H_
#define _STUDENT_DATABASE_H_

#define MAX_STUDENT 10
#define LENGTH 50
#define MESSAGE_LENGTH 256

enum ERROR {
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct {
    int id;
    char name[LENGTH];
} student;

void initDB();
int add(int, char*);
student* get(int);

#endif // _STUDENT_DATABASE_H_