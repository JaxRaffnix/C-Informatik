#include <stdio.h>

// int number_of_entries (struct student *s, int max)
// {
//     char filename[20];
//     printf("Specify input file, max. name length is 20 characters:\n");
//     scanf("%s", filename);
//     FILE* inputfile = fopen (filename, "r");

//     if (inputfile == NULL)
//     {
//         return 0;
//     }
    
//     int lines;
//     char temp;
//     while (!feof (inputfile))
//     {
//         temp = fgetc (inputfile);
//         if (temp == '\n')
//         {
//             lines++;
//         }
//     }
//     return lines;
    
// }

// unsigned int age (struct student *s)
// {
//     struct current_time
//     {
//         int day;
//         int month;
//         int year;
//     };
//     struct current_time ws2022;
//     ws2022.day = 12;
//     ws2022.month = 12;
//     ws2022.year = 2022;
// };

// int youngest (struct student *s, int length)
// {
//     struct youngest {
//         unsigned int age;
//         struct student youngest;
//     };
//     struct youngest findyoungest;

//     findyoungest.age = 100;
//     for (int i = 0; i < length; i++)
//     {
//         if (age(mystudentlist[i] < findyoungest.age))
//         {
//             findyoungest.age = age(mystudentlist[i]);
//             findyoungest.youngest = mystudentlist[i];
//         }
//     }
//     return findyoungest;
// };

int read_student_data(char *filename, struct student *students) {};

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

int main()
{
    struct student students[100];

    read_student_data("studentlist.txt", students);

}

int read_student_data(char *filename, struct student *students) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: unable to open file '%s'.\n", filename);
        return 0;
    }

    int i = 0;
    while (fscanf(file, "%s %d %d %d %d", students[i].name, &students[i].semester, &students[i].studentbirthday.day, &students[i].studentbirthday.month, &students[i].studentbirthday.year) == 5) {
        i++;
        if (i >= MAX_STUDENTS) {
            break;
        }
    }

    fclose(file);
    return i;
};