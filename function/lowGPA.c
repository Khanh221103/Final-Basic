#include"define.h"
#include"function.h"

void low(struct Information students[1000]) {
    float minGPA = 100;
        printf("Student with the lowest GPA:\n");
        for (int i = 0; i < numberOfStudents; i++) {
            if (students[i].GPA < minGPA) {
                minGPA = students[i].GPA;
            }
        }
        for (int i = 0; i < numberOfStudents; i++) {
            if (students[i].GPA == minGPA) {
                printf("+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
                printf("|  %-10s |%-30s| %-2d/%-2d/%-2d |    %.2f    |     %.2f     |         %.2f         |  %.2f  |\n", students[i].ID,students[i].Name,students[i].mfg.Day, students[i].mfg.Month, students[i].mfg.Year,students[i].AvrAL,students[i].AvrCAl,students[i].AvrBP, students[i].GPA);
                printf("+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
            }
        }
}