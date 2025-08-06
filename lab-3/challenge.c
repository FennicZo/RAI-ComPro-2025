#include <stdio.h>

char get_letter_grade(int score);
float get_numerical_grade(char grade);

int main(void) {
    int cal_score, phy_score, comp_score;
    char cal_grade, phy_grade, comp_grade;
    float cal_num, phy_num, comp_num, gpa;

    printf("Calculus score: ");
    scanf("%d", &cal_score);

    printf("Physic score: ");
    scanf("%d", &phy_score);

    printf("compro score: ");
    scanf("%d", &comp_score);

    cal_grade = get_letter_grade(cal_score);
    phy_grade = get_letter_grade(phy_score);
    comp_grade = get_letter_grade(comp_score);

    cal_num = get_numerical_grade(cal_grade);
    phy_num = get_numerical_grade(phy_grade);
    comp_num = get_numerical_grade(comp_grade);

    gpa = (cal_num + phy_num + comp_num) / 3.0;

    printf("\n%-10s%-10s%-10s%-10s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s%-10d%-10c%.1f\n", "Cal", cal_score, cal_grade, cal_num);
    printf("%-10s%-10d%-10c%.1f\n", "Physics", phy_score, phy_grade, phy_num);
    printf("%-10s%-10d%-10c%.1f\n", "compro", comp_score, comp_grade, comp_num);
    printf("\nGPA: %.1f\n", gpa);

    return 0;
}

char get_letter_grade(int score) {
    if (score >= 80) {
        return 'A';
    } 
    else if (score >= 70) {
        return 'B';
    } 
    else if (score >= 60) {
        return 'C';
    } 
    else if (score >= 50) {
        return 'D';
    } 
    else {
        return 'F';
    }
}

float get_numerical_grade(char grade) {
    switch (grade) {
        case 'A': return 4.0f;
        case 'B': return 3.0f;
        case 'C': return 2.0f;
        case 'D': return 1.0f;
        case 'F': return 0.0f;
        default:  return 0.0f;
    }
}