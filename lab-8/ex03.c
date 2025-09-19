#include <stdio.h>

int sumOfSquares(int a, int b) {
    return (a * a) + (b * b);
}

int main() {
    int num1, num2;

    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of squares of %d and %d is %d\n", num1, num2, sumOfSquares(num1, num2));

    return 0;
}