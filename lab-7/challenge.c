#include <stdio.h>

int main(void) {
    int array[5];
    int size = 5;

    printf("Enter 5 integers: ");
    for (int i = 0; i < size; i++) {
        if (scanf("%d", array + i) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            int *a = array + j;
            int *b = array + j + 1;
            if (*a > *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}