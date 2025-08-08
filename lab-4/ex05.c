#include <stdio.h>

int main () {
    
    int num, i;
    int fac = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fac = fac * i;
    }

    printf("Factorial of %d is %d\n", num, fac);

    return 0;
}