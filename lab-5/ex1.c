#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };

    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i != j) {
                A[i][j] = 0;
            }
        }
    }

    printf("Diagonal matrix of A=\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}