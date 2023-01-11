#include <stdio.h>

#define MAX_STUDENTS 100

struct student {
    char name[50];
    int age;
    float grade;
};

int read_student_data(char *filename, struct Student *students) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: unable to open file '%s'.\n", filename);
        return 0;
    }

    int i = 0;
    while (fscanf(file, "%s %d %f", students[i].name, &students[i].age, &students[i].grade) == 3) {
        i++;
        if (i >= MAX_STUDENTS) {
            break;
        }
    }

    fclose(file);
    return i;
}

int main()
{
    struct student studentarry[100];
}