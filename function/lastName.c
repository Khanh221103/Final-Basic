#include"define.h"
#include"function.h"

void lastName(struct Information students[1000]) {
    for (int i = 0; i < numberOfStudents; i++) {
            char *last_space = strchr(students[i].Name, ' '); 
            if (last_space != NULL) {
                char last_name[50];
                strncpy(last_name, students[i].Name, last_space - students[i].Name);
                last_name[last_space - students[i].Name] = '\0';
                printf("Last name of %s is: ", students[i].Name);
                printf("%s\n", last_name); 
            }
        }
}