#include <stdio.h>

int main() {

    char name[50];
    int age;
    float height;
    float weight;
    char gender;
    char quali[50];

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%f", &weight);
    getchar();
    printf("Enter your gender: ");
    scanf("%c", &gender);
    getchar();
    printf("Enter your Education Qualification: ");
    fgets(quali, sizeof(quali), stdin);

    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %.0f\n", weight);
    printf("Education: %s", quali);

    return 0;
}