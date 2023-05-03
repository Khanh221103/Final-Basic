#include<stdio.h>
#include<string.h>

struct Date {
    int Day;
    int Month;
    int Year;
};
struct Information {
    char ID[100];
    char Name[100];
    struct Date mfg;
    float AvrAL, AvrCAl, AvrBP;
    float GPA;
};

int numberOfStudents;