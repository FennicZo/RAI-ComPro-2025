#include <stdio.h>

int main () {
    int marks[5];
    int total = 0, highest = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
        
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d\n", highest);

    return 0;
}