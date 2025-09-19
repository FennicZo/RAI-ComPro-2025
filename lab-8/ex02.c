#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void displayPrimes(int start, int end) {
    printf("\nThe prime numbers within the intervals are:\n");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    displayPrimes(start, end);

    return 0;
}