#include"define.h"
#include"function.h"

void insert(int num, struct Information students[1000]) {
    for (int i = 0; i < num; i++) {
        printf("Information of student %d\n", i+1);
        fflush(stdin);
        printf("Student ID:\t\t\t");
        scanf("%s", students[i].ID);
        fflush(stdin);
        printf("Name: \t\t\t\t");
        gets(students[i].Name);
        // wscanf(L"%ls", students[i].Name);
        fflush(stdin);
        printf("Birth Date (dd mm yyyy): \t");
        scanf("%d %d %d", &students[i].mfg.Day, &students[i].mfg.Month, &students[i].mfg.Year);
        fflush(stdin);
        printf("GPA of Algebra:\t\t\t");
        scanf("%f", &students[i].AvrAL);
        fflush(stdin);
        printf("GPA of Calculus:\t\t");
        scanf("%f", &students[i].AvrCAl);
        printf("GPA of Basic Programming:\t");
        scanf("%f", &students[i].AvrBP);
        students[i].GPA = (students[i].AvrAL + students[i].AvrCAl + students[i].AvrBP) / 3;
        printf("GPA of 3 subjects:\t\t%.2f\n", students[i].GPA);
        printf("------------------------\n");
    }
}