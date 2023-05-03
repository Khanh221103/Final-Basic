#include"define.h"
#include"function.h"

void prtSc(struct Information students[1000]) {
    printf("+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    printf("| %-11s |             %-4s             |   %-6s   |   %-7s   |   %-9s   |   %-17s   |   %-3s   |\n", "Student ID", "Name", "Birth", "Algebra", "Calculus", "Basic Programming", "GPA");
    printf("+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("|  %-10s |%-30s| %-2d/%-2d/%-2d |    %.2f    |     %.2f     |         %.2f         |  %.2f  |\n", students[i].ID,students[i].Name,students[i].mfg.Day, students[i].mfg.Month, students[i].mfg.Year,students[i].AvrAL,students[i].AvrCAl,students[i].AvrBP, students[i].GPA);
        printf("+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    }
}