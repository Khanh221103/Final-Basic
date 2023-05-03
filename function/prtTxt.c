#include"define.h"
#include"function.h"

void prtTxt(struct Information students[1000]) {
    FILE *fp = fopen("student_list.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
    }
    fprintf(fp, "+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    fprintf(fp, "| %-11s |             %-4s             |   %-6s   |   %-7s   |   %-9s   |   %-17s   |   %-3s   |\n", "Student ID", "Name", "Birth", "Algebra", "Calculus", "Basic Programming", "GPA");
    fprintf(fp, "+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    for (int i = 0; i < numberOfStudents; i++) {
        fprintf(fp, "|  %-10s |%-30s| %-2d/%-2d/%-2d |    %.2f    |     %.2f     |         %.2f         |  %.2f  |\n", students[i].ID,students[i].Name,students[i].mfg.Day, students[i].mfg.Month, students[i].mfg.Year,students[i].AvrAL,students[i].AvrCAl,students[i].AvrBP, students[i].GPA);
        fprintf(fp, "+-------------+------------------------------+------------+-------------+---------------+-----------------------+---------+\n");
    }
    fclose(fp);
}