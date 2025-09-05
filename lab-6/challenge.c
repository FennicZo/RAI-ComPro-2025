#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 4

struct Student {
    char name[21];
    int id;
    float grades[SUBJECTS];
};

int main() {
    struct Student students[STUDENTS];
    float studentAverages[STUDENTS];
    float subjectSums[SUBJECTS] = {0};
    float subjectAverages[SUBJECTS];
    const char *subjectNames[SUBJECTS] = {"Math", "English", "Science", "History"};

    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d %f %f %f %f", 
              students[i].name, &students[i].id, 
              &students[i].grades[0], &students[i].grades[1], 
              &students[i].grades[2], &students[i].grades[3]);

        float sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum += students[i].grades[j];
            subjectSums[j] += students[i].grades[j];
        }
        studentAverages[i] = sum / SUBJECTS;
    }

    for (int j = 0; j < SUBJECTS; j++) {
        subjectAverages[j] = subjectSums[j] / STUDENTS;
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, studentAverages[i]);
    }

    int topStudentIndex = 0;
    for (int i = 1; i < STUDENTS; i++) {
        if (studentAverages[i] > studentAverages[topStudentIndex]) {
            topStudentIndex = i;
        }
    }
    printf("\nTop Student: %s with %.2f\n", students[topStudentIndex].name, studentAverages[topStudentIndex]);

    printf("\nSubject Averages:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("%s: %.2f\n", subjectNames[j], subjectAverages[j]);
    }

    int topSubjectIndex = 0;
    for (int j = 1; j < SUBJECTS; j++) {
        if (subjectAverages[j] > subjectAverages[topSubjectIndex]) {
            topSubjectIndex = j;
        }
    }
    printf("\nTop Subject: %s with average %.2f\n", subjectNames[topSubjectIndex], subjectAverages[topSubjectIndex]);

    return 0;
}