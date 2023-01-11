#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STUDENTS 100

struct birthday {
        int day;
        int month;
        int year;
};
struct student {
    char name[29];
    int semester;
    struct birthday studentbirthday;
};

int read_student_data(char *filename, struct student *students, int max) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: unable to open file '%s'.\n", filename);
        return 0;
}

    int i = 0;
    while (fscanf(file, "%s %d %d.%d.%d", students[i].name, &students[i].semester, &students[i].studentbirthday.day, &students[i].studentbirthday.month, &students[i].studentbirthday.year) == 5) {
        i++;
        if (i >= max) {
            printf("Error: too many entries in the file. Limit is reached.\n");
            break;
        }
    }

    fclose(file);
    return i;
};

int calculate_student_age(struct student* students, int entry) {
    time_t current_time = time(NULL);
    struct tm* current_date = localtime(&current_time);

    int current_year = current_date->tm_year + 1900;
    int current_month = current_date->tm_mon + 1;
    int current_day = current_date->tm_mday;

    int birth_year = students[entry].studentbirthday.year;
    int birth_month = students[entry].studentbirthday.month;
    int birth_day = students[entry].studentbirthday.day;

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    return age;
};

int find_youngest_student(struct student* students, int entries) {
    int youngest_age = 200;
    for (int i = 0; i < entries + 1; i++)
    {
        if (calculate_student_age(students, i) < youngest_age)
        {
            youngest_age = calculate_student_age(students, i);
        }
    }
    return youngest_age;
};

int main()
{
    struct student students[MAX_STUDENTS];

    int entries = read_student_data("studentlist.txt", students, MAX_STUDENTS);

    printf("Read %d entries\n", entries);

    for (int i = 0; i < entries; i++) {
        printf("Entry: %d\t Name: %s, Semester: %d, Birthday: %d.%d.%d\n", i, students[i].name, students[i].semester, students[i].studentbirthday.day, students[i].studentbirthday.month, students[i].studentbirthday.year);
    }

    int age = calculate_student_age(students, 1);
    printf("Age: %d\n", age);

    int youngest = find_youngest_student(students, entries-1);
    printf("youngest student: %d\n", youngest);

    return 0;
}