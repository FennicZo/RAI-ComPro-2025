#include <stdio.h>


int main() {
    int values[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &values[i]);
    }
    
    printf("Values in array are: ");
    
    for (int i = 0; i < 10; i++) {
        printf("%d", values[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    
    printf("\n");
    
    return 0;
}