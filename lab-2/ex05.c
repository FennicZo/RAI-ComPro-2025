#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char firstName[50], lastName[50];
    int age;
    float height;
    char university[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    size_t len = strlen(fullName);
    if (fullName[len - 1] == '\n') {
        fullName[len - 1] = '\0';
    }

    sscanf(fullName, "%s %s", firstName, lastName);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);
    while (getchar() != '\n');

    printf("Enter your University name: ");
    fgets(university, sizeof(university), stdin);
    len = strlen(university);
    if (university[len - 1] == '\n') {
        university[len - 1] = '\0';
    }

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.\n",
           lastName[0], firstName, university, age, height);

    return 0;
}