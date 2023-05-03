#include"define.h"
#include"function/function.h"

int main() {
    number();
    struct Information students[numberOfStudents];
    insert(numberOfStudents, students);
    prtSc(students);
    prtTxt(students);

    Option:
    printf("\nPress 1 for the highest GPA.\nPress 2 for the lowest GPA.\nPress 3 for the highest BP grade.\nPress 4 for taking the student's last name.\nPress 5 for sorting by GPA from low to high.\nPress 6 for sorting by GPA from high to low.\nPress 7 for ending task.\n------------------------\n");
    int option;
    scanf("%d", &option);
    
    switch (option) {
        case 1:         //Highest GPA
            high(students);
            goto Option;
            break;
        case 2:         //Lowest GPA
            low(students);
            goto Option;
            break;
        case 3:         //Highest BP
            bp(students);
            goto Option;
            break;
        case 4:         //Take lastname
            lastName(students);
            goto Option;
            break;
        case 5:         //Sort low to high
            sortLow(students, numberOfStudents);
            goto Option;
            break;
        case 6:         //Sort high to low
            sortHigh(students, numberOfStudents);
            goto Option;
            break;
        case 7:         //END
            printf("Program end.");
            break;
    }
    return 0;
}