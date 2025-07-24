#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    char myChar;

    printf("Please enter an integer value: ");
    scanf("%d", &myInt);
    printf("You entered %d\n", myInt);

    printf("Please enter a float value: ");
    scanf("%f", &myFloat);
    printf("You entered %.2f\n", myFloat);
    getchar();

    printf("Please enter a character: ");
    scanf("%c", &myChar);
    printf("You entered %c\n", myChar);

    return 0;
}