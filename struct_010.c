#include <stdio.h>

union status {
    int rank;
    char deg[4];
};

struct personal {
    char id[20];
    float gpa;
    union status level;
};

struct identity {
    char name[30];
    struct personal student;
};

int main () {
    printf("-------------------------------------------------\n");
    struct identity MHS[5], *ptr = NULL;

    int i;

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            printf("Enter your name     : ");
            scanf("%[^\n]*c", MHS[i].name);
        }

        else if (i == 1) {
            printf("Enter your ID       : ");
            scanf("%s", MHS[i].student.id);
        }

        else if (i == 2) {
            printf("Enter your GPA      : ");
            scanf("%f", &MHS[i].student.gpa);
        }

        else if (i == 3) {
            printf("Enter your rank     : ");
            scanf("%d", &MHS[i].student.level.rank);
        }

        else {
            printf("Enter your degree   : ");
            scanf("%s", MHS[i].student.level.deg);
        }
    }

    printf("-------------------------------------------------\n");
    ptr = MHS;

    printf("Output dengan Struct\n");
    printf("Student Name        : %s\n", MHS[0].name);
    printf("Student ID          : %s\n", MHS[1].student.id);
    printf("Student GPA         : %.2f\n", MHS[2].student.gpa);
    printf("Student Rank        : %d\n", MHS[3].student.level.rank);
    printf("Student Degree      : %s\n", MHS[4].student.level.deg);

    printf("-------------------------------------------------\n");
    printf("Output dengan Pointer\n");
    for (i = 0; i < 5; i++) {
        if (i == 0) {
            printf("Student Name        : %s\n", ptr -> name);
        }

        else if (i == 1) {
            printf("Student ID          : %s\n", ptr -> student.id);
        }

        else if (i == 2) {
            printf("Student GPA         : %.2f\n", ptr -> student.gpa);
        }

        else if (i == 3) {
            printf("Student Rank        : %d\n", ptr -> student.level.rank);
        }

        else {
            printf("Student Degree      : %s\n", ptr -> student.level.deg);
        }

        ptr++;
    }

    printf("-------------------------------------------------\n");

    return 0;
}