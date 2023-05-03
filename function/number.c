#include"define.h"
#include"function.h"

void number() {
    Nhap:
    printf("Enter the number of students (Max 1000): ");
    scanf("%d", &numberOfStudents);
    if(numberOfStudents > 1000 || numberOfStudents <= 0) goto Nhap;
}