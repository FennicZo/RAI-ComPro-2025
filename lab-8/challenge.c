#include <stdio.h>

#define max_name_len 50
#define max_students 100

float calculateAverage(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n;
}

int findHighest(int grades[], int n) {
    int highest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowest(int grades[], int n) {
    int lowest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

void printPassed(char names[][max_name_len], int grades[], int n) {
    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            printf("%s\n", names[i]);
        }
    }
}

int main(void) {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > max_students) {
        printf("Invalid number of students.\n");
        return 1;
    }

    char names[n][max_name_len];
    int grades[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%49s", names[i]);

        printf("Enter grade of %s: ", names[i]);
        if (scanf("%d", &grades[i]) != 1 || grades[i] < 0 || grades[i] > 100) {
            printf("Invalid grade.\n");
            return 1;
        }
    }

    float avg = calculateAverage(grades, n);
    int highest = findHighest(grades, n);
    int lowest = findLowest(grades, n);

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n\n", lowest);

    printPassed(names, grades, n);

    return 0;
}