#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    int age;
    float height;
    char university[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    getchar();
    printf("Enter your University name: ");
    fgets(university, sizeof(university), stdin);

    if (fullName[strlen(fullName) - 1] == '\n') {
        fullName[strlen(fullName) - 1] = '\0';
    }
    if (university[strlen(university) - 1] == '\n') {
        university[strlen(university) - 1] = '\0';
    }

    printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is\n%.1f cm tall.\n", fullName, university, age, height);

    return 0;
}
