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
        printf("Student %d name is \"%s\", age %d.\n", i + 1, 
            students[i].name, students[i].age);
    }

    int highestIndex = 0;
    
    for (int j = 1; j < 3; j++) {
        if (students[j].score > students[highestIndex].score) {
            highestIndex = j;
        }
    }

    printf("\nThe highest score belongs to %s at %.1f scores!\n", 
        students[highestIndex].name, students[highestIndex].score);

    return 0;
}