#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };

    int Result[3][3];
    int i, j, k;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Result[i][j] = 0;
        }
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            for(k=0; k<3; k++) {
                Result[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    printf("A x A = \n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}