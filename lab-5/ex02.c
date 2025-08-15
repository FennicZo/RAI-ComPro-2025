#include <stdio.h>

int main () {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reverse[9];
    int size = 9;

    for (int i = 0; i < size; i++) {
        reverse[i] = original[size - 1 - i];
    }

    printf("Reversed Array: ");
    
    for (int i = 0; i < size; i++) {
        printf("%d ", reverse[i]);
    }
    
    printf("\n");

    return 0;
}