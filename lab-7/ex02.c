#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    int temp;  

    int *pA = &a;
    int *pB = &b;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    temp = *pA;
    *pA = *pB;
    *pB = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}