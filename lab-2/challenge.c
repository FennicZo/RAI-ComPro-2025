#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    int min, max, sum;
    float average;

    
    printf("Enter integer #1: ");
    if (scanf("%d", &num1) != 1)
        return 1;
    printf("Enter integer #2: ");
    if (scanf("%d", &num2) != 1)
        return 1;
    printf("Enter integer #3: ");
    if (scanf("%d", &num3) != 1)
        return 1;

    min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;

    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("\nResults:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}