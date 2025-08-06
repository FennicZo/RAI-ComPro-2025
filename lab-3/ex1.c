#include <stdio.h>

int main(void) {
    int num1, num2, choice;
    int result;
    float result_div;

    printf("Enter Num1 : ");
    scanf("%d", &num1);
    
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("Calculator Menu :\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Ans : %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Ans : %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Ans : %d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result_div = (float)num1 / num2;
                printf("Ans : %d / %d = %.2f\n", num1, num2, result_div);
            }
            else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                printf("Ans : %d %% %d = %d\n", num1, num2, result);
            }
            else {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Invalid menu choice.\n");
    }

    return 0;
}