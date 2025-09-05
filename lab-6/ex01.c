#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter score of student %d: ", i + 1);
        scanf("%f", &students[i].score);

        printf("\n");

    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d.\n", i + 1, students[i].name, students[i].age);
    }
    
    return 0;
}